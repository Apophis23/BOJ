#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
vector<pair<int, int>> node[10001];
bool visited[10001] = { false, };
int result = 0;
int endPoint = 0;

void dfs(int p, int len) {
	if (visited[p] == true) {
		return;
	}
	visited[p] = true;
	if (result < len) {
		result = len;
		endPoint = p;
	}
	for (int i = 0; i < node[p].size(); i++) {
		dfs(node[p][i].first, len + node[p][i].second);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	for (int i = 0; i < num-1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		node[a].push_back({ b, c});
		node[b].push_back({ a, c });
	}

	dfs(1, 0);
	result = 0;
	fill(visited, visited + 10001, false);
	dfs(endPoint, 0);
	cout << result;
}