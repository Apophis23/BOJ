#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int a, b, c, d, e;
int map[200][200] = { 0, };
bool check[200][200];
int changey[6] = { -2,-2,0,0,2,2 };
int changex[6] = { -1, 1, -2, 2, -1, 1 };
queue<pair<int, int>> q;

void DFS() {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		check[y][x] = true;
		q.pop();
		for (int i = 0; i < 6; i++) {
			int cy = y + changey[i];
			int cx = x + changex[i];
			if (cy >= a || cy < 0 || cx >= a || cx < 0) {
				continue;
			}
			if (check[cy][cx] == false) {
				check[cy][cx] = true;
				map[cy][cx] = map[y][x] + 1;
				q.push(make_pair(cy, cx));
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b >> c >> d >> e;
	map[b][c] = 0;
	check[b][c] = true;
	q.push(make_pair(b, c));
	DFS();
	if (map[d][e] == 0) {
		cout << -1;
	}
	else {
		cout << map[d][e];
	}
}