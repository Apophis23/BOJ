#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
int a, b, c, d, e;
bool visited[101];
int cnt[101] = { 0, };
vector<pair<int, int>>solution;
vector<int>vec[101];
queue<int> q;
int num = 0;
int answer = 0;

bool compare(pair<int, int>a, pair<int, int> b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	else {
		return a.first < b.first;
	}
}

void BFS(int a) {
	visited[a] = true;
	q.push(a);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < vec[now].size(); i++) {
			int next = vec[now][i];
			if (visited[next] == true) {
				continue;
			}
			q.push(next);
			visited[next] = true;
			cnt[next] = cnt[now] + 1;
			answer += cnt[next];
		}
	}
}

void insertedge(int a, int b) {
	vec[a].push_back(b);
	vec[b].push_back(a);
}

void initial() {
	for (int i = 0; i <= a; i++) {
		visited[i] = false;
		cnt[i] = 0;
	}
	answer = 0;
	num = 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		cin >> c >> d;
		insertedge(c, d);
	}
	for (int i = 1; i <= a; i++) {
		BFS(i);
		solution.push_back(make_pair(answer, i));
		initial();
	}
	sort(solution.begin(), solution.end(), compare);
	cout << solution[0].second;
}
