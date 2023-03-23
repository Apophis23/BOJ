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

	void DFS(int v) {
		visited[v] = true;
		num++;
		result[v] = num;
		for (int i = 0; i < graph[v].size(); i++) {
			int next = graph[v][i];
			if (!visited[next]) {
				DFS(next);
			}
		}
	}
	void sort(int a) {
		for (int i = 1; i <= a; i++) {
			sort(graph[i].begin(), graph[i].end(), greater<>());
		}
	}
	void insertedge(int a, int b) {
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	void print(int a) {
		for (int i = 1; i <= a; i++) {
			cout << result[i] << "\n";
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
	print(a);
}