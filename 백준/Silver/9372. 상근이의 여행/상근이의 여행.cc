#include<iostream>
#include <vector>
#include <queue>
using namespace std;
int a, b, c, d, e;
vector<int> airplane[1001];
bool visited[1001] = { 0, };
int num = 0;

void DFS(int start) {
	visited[start] = true;
	num++;
	for (int i = 0; i < airplane[start].size(); i++) {
		int next = airplane[start][i];
		if (!visited[next]) {
			DFS(next);
		}
	}
}

void insertedge(int a, int b) {
	airplane[a].push_back(b);
	airplane[b].push_back(a);
}

void initial() {
	for (int i = 1; i <= b; i++) {
		airplane[i].clear();
		visited[i] = false;
	}
	num = 0;
}

int main() {
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b >> c;
		for (int j = 0; j < c; j++) {
			cin >> d >> e;
			insertedge(d, e);
		}
		DFS(1);
		cout << num - 1 << "\n";
		initial();
	}
	
}