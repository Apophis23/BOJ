#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int a, b, c;
vector <int> vec;
queue<int>q;
int dist[1001] = { 0, };
bool visited[1001] = { 0, };

void BFS() {
	while (!q.empty()) {
		int now = q.front();
		visited[now] = true;
		q.pop();
		for (int i = 1; i <= vec[now]; i++) {
			int change = now + i;
			if (change >= a) {
				continue;
			}
			if (visited[change] == false) {
				visited[change] = true;
				dist[change] = dist[now] + 1;
				q.push(change);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		vec.push_back(b);
	}
	q.push(0);
	BFS();
	if (a == 1) {
		cout << 0;
	}
	else if (dist[a - 1] == 0) {
		cout << -1;
	}
	else {
		cout<<dist[a-1];
	}
}