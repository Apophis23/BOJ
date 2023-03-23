#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int a, b, c, d, e, f;
queue<int> q;
vector<int> vec[300001];
bool visited[300001] = { 0, };
int map[300001];
vector<int> answer;

void insertedge(int a, int b) {
	vec[a].push_back(b);
}

void BFS(int a) {
	q.push(a);
	visited[a] = true;
	map[a] = 0;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < vec[x].size(); i++) {
			int next = vec[x][i];
			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
				map[next] = map[x] + 1;
				if (map[next] > c) {
					return;
				}
				if (map[next] == c) {
					answer.push_back(next);
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b >> c >> d;
	for (int i = 0; i < b; i++) {
		cin >> e >> f;
		insertedge(e, f);
	}
	BFS(d);
	sort(answer.begin(), answer.end());
	if (answer.size() == 0) {
		cout << -1;
	}
	else {
		for (int i = 0; i < answer.size(); i++) {
			cout << answer[i] << "\n";
		}
	}
}