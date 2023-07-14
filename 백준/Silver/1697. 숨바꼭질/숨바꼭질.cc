#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool visited[100001] = {};
int map[100001] = {};
int change[3] = { 2, 1, -1 };
queue<int>q;
int a, b;

void BFS(int a) {
	visited[a] = true;
	q.push(a);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < 3; i++) {
			int cx;
			if (i == 0) {
				cx = 2 * x;
			}
			else {
				cx = x + change[i];
			}
			if (cx < 0|| cx>100000) {
				continue;
			}
			if (visited[b] == true) {
				break;
			}
			if (visited[cx] != true) {
				q.push(cx);
				visited[cx] = true;
				map[cx] = map[x] + 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b;
	BFS(a);
	cout << map[b];
}