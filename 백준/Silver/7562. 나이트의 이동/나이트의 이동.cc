#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool visited[300][300] = {};
int map[300][300] = {};
queue <pair<int, int>> q;
int a, b, c, d, e, f;
int cx[8] = {-2, -1, 1, 2, -2, -1, 1, 2 };
int cy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

void BFS(int y, int x) {
	visited[y][x] = true;
	q.push(make_pair(y, x));
	while (!q.empty()) {
		int changex = q.front().second;
		int changey = q.front().first;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nextx = changex + cx[i];
			int nexty = changey + cy[i];
			if (nextx < 0 || nextx >= b || nexty < 0 || nexty >= b) {
				continue;
			}
			if (visited[e][f] == true) {
				break;
			}
			if (visited[nexty][nextx] != true) {
				q.push(make_pair(nexty, nextx));
				visited[nexty][nextx] = true;
				map[nexty][nextx] = map[changey][changex] + 1;
			}
		}
	}
}

void initial() {
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < b; j++) {
			map[i][j] = 0;
			visited[i][j] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b >> c >> d >> e >> f;
		BFS(c, d);
		cout << map[e][f] << "\n";
		initial();
	}
}