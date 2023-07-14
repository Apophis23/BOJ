#include<iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define Max 100001
using namespace std;

vector<int> graph[Max];
bool visited[Max] = {};
int result[Max] = {};
int num = 0;

void insertedge(int a, int b) {
	graph[a].push_back(b);
	graph[b].push_back(a);
}

void BFS(int a) {
	queue<int> q;
	q.push(a);
	visited[a] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		num++;
		for (int i = 0; i < graph[x].size(); i++) {
			int y = graph[x][i];
			if (!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d, e;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		cin >> d >> e;
		insertedge(d, e);
	}
	BFS(1);
	cout << num-1;
}