#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int a, b, c, d, e, f;
vector<int> vec[101];
bool visited[101];
int map[101] = { 0, };
queue<int> q;

void insertedge(int a, int b) {
	vec[a].push_back(b);
	vec[b].push_back(a);
}

void BFS(int a) {
	visited[a] = true;
	map[a] = 0;
	q.push(a);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < vec[x].size(); i++) {
			int next = vec[x][i];
			if (!visited[next]) {
				visited[next] = true;
				map[next] = map[x] + 1;
				q.push(next);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b >> c >> d;
	for (int i = 0; i < d; i++) {
		cin >> e >> f;
		insertedge(e, f);
	}
	BFS(b);
	if (map[c] == 0) {
		cout << -1;
	}
	else {
		cout << map[c];
	}
}