#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b, c, d, x, y;
int cnt;
int map[50][50];
bool visited[50][50] = {};
int ud[4] = {-1, 1, 0, 0};
int lr[4] = { 0, 0, -1, 1 };

void dfs(int m, int n) {
	visited[m][n] = true;
	for (int i = 0; i < 4; i++) {
		int cy = m + ud[i];
		int cx = n + lr[i];
		if (cy < 0 || cy >= c || cx < 0 || cx >= b) {
			continue;
		}
		if (visited[cy][cx] != true && map[cy][cx] == 1) {
			dfs(cy, cx);
		}
	}
}

void initial() {
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < b; j++) {
			visited[i][j] = false;
			map[i][j] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b >> c >> d;
		for (int i = 0; i < d; i++) {
			cin >> x >> y;
			map[y][x] = 1;
		}
		cnt = 0;
		for (int i = 0; i < c; i++) {
			for (int j = 0; j < b; j++) {
				if (visited[i][j] != true && map[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
		initial();
	}
}