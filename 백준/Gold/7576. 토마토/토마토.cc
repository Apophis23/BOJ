#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int a, b, c;
int map[1001][1001] = {};
bool visited[1001][1001] = {};
int ud[4] = { -1, 1, 0, 0 };
int lr[4] = { 0, 0, -1, 1 };
queue<pair<int, int>> q;
int m = 0;
int num = 0;
int n = 0;

void BFS() {
	while (!q.empty()) {
		int cy = q.front().first;
		int cx = q.front().second;
		visited[cy][cx] = true;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = cy + ud[i];
			int nx = cx + lr[i];
			if (ny<0 || ny>=b || nx<0 || nx>=a) {
				continue;
			}
			if (visited[ny][nx] == false && map[ny][nx] != -1) {
				map[ny][nx] = map[cy][cx] + 1;
				visited[ny][nx] = true;
				num++;
				if (map[ny][nx] > m) {
					m = map[ny][nx];
				}
				q.push(make_pair(ny, nx));
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b;

	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			cin >> c;
			map[i][j] = c;
			if (c == 1) {
				q.push(make_pair(i, j));
				visited[i][j] = true;
				num++;
			}
			else if (c == -1) {
				n++;
			}
		}
	}
	if (a* b-n == num) {
		cout << 0;
	}
	else {
		BFS();
		if (num < a * b - n) {
			cout << -1;
		}
		else {
			cout << m - 1;
		}
	}
}