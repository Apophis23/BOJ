#include<iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define Max 100001
using namespace std;
vector<int> graph[Max];
int arr[Max] = {};
bool visited[Max] = {};
queue <int> Q;

void insertedge(int a, int b) {
	graph[a].push_back(b);
	graph[b].push_back(a);
}

void sort(int a) {
	for (int i = 1; i <= a; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
}

void DFS(int cur) {
	visited[cur] = true;
	cout << cur << " ";
	for (int i = 0; i < graph[cur].size(); i++) {
		int next = graph[cur][i];
		if (visited[next] == true) {
			continue;
		}
		DFS(next);
	}
}

void BFS(int start) {
	visited[start] = true;
	Q.push(start);
	while (Q.empty() != true) {
		int x = Q.front();
		Q.pop();
		cout << x << " ";
		for (int i = 0; i < graph[x].size(); i++) {
			int next = graph[x][i];
			if (visited[next] != true) {
				Q.push(next);
				visited[next] = true;
			}
		}
	}
}

void initial(int a) {
	for (int i = 1; i <= a; i++) {
		visited[i] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c, d, e;
	cin >> a >> b >> c;
	for (int i = 0; i < b; i++) {
		cin >> d >> e;
		insertedge(d, e);
	}
	sort(a);
	DFS(c);
	initial(a);
	cout << "\n";
	BFS(c);
}