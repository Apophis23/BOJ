#include <iostream>
#include <vector>
#include <queue>
#define RED 1
#define BLUE 2
using namespace std;
vector<int>vertex[20000];
queue<int> q;
vector<int>visited(20000, 0);
int a, b, c, d, e;

void BFS(int start) {
	visited[start] = RED;
	q.push(start);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < vertex[now].size(); i++) {
			int next = vertex[now][i];
			int color = visited[now];
			if (visited[next] == 0) {
				if (color == RED) {
					visited[next] = BLUE;
				}
				else {
					visited[next] = RED;
				}
				q.push(next);
			}
		}
	}
}

void check() {
	for (int i = 1; i <= b; i++) {
		for (int j = 0; j < vertex[i].size(); j++) {
			int next = vertex[i][j];
			if (visited[i] == visited[next]) {
				cout << "NO" << "\n";
				return;
			}	
		}
	}
	cout << "YES" << "\n";
}

void initial() {
	for (int i = 1; i <= b; i++) {
		visited[i] = 0;
		vertex[i].clear();
	}
}

void insertedge(int a, int b) {
	vertex[a].push_back(b);
	vertex[b].push_back(a);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b >> c;
		for (int j = 0; j < c; j++) {
			cin >> d >> e;
			insertedge(d, e);
		}
		for (int j = 0; j <= b; j++) {
			if (visited[j] == 0) {
				BFS(j);
			}
		}
		check();
		initial();
	}
}