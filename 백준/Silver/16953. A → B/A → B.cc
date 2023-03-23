#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
long a, b;
queue<pair<long, int>> q;

void BFS() {
	while (!q.empty()) {
		long first = q.front().first * 2;
		long second = q.front().first * 10 + 1;
		int cnt = q.front().second;
		q.pop();
		if (first == b || second == b) {
			cout << cnt + 1;
			return;
		}
		if (first < b) {
			q.push(make_pair(first, cnt + 1));
		}
		if (second < b) {
			q.push(make_pair(second, cnt + 1));
		}
	}
	cout << -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b;
	q.push(make_pair(a, 1));
	if (b < 10 && b>1 && b % 2 == 1) {
		cout << -1;
	}
	else {
		BFS();
	}
}