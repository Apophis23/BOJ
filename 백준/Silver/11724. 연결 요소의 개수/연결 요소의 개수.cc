#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec[1001];
vector<bool> visited(1001, false);
int a, b, c, d;

void insertedge(int a, int b) {
	vec[a].push_back(b);
	vec[b].push_back(a);
}

void DFS(int start) {
	visited[start] = true;
	for (int i = 0; i < vec[start].size(); i++) {
		int next = vec[start][i];
		if (visited[next] ==true) {
			continue;
		}
		DFS(next);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b;
	int num = 0;
	for (int i = 0; i < b; i++) {
		cin >> c >> d;
		insertedge(c, d);
	}
	for (int i = 1; i <= a; i++) {
		if (visited[i] == false) {
			DFS(i);
			num++;
		}
	}
	cout << num;
}