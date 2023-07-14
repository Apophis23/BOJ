#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;
int a, b, c, d, e;
int m = 0;
int num = 0;
queue <tuple<int, int, int>> q;
int map[101][101][101];
bool visited[101][101][101];
int changex[6] = { 0,0,0,0,-1,1 };
int changey[6] = { 0 ,0,-1,1,0,0 };
int changez[6] = { -1,1,0,0,0,0 };

void DFS() {
	while (!q.empty()) {
		tuple<int, int, int> front = q.front();
		int x = get<2>(front);
		int y = get<1>(front);
		int z = get<0>(front);
		visited[z][y][x] = true;
		q.pop();
		for (int i = 0; i < 6; i++) {
			int cx = x + changex[i];
			int cy = y + changey[i];
			int cz = z + changez[i];
			if (cx < 0 || cx >= a || cy < 0 || cy >= b || cz < 0 || cz >= c) {
				continue;
			}
			if (visited[cz][cy][cx] != true && map[cz][cy][cx] != -1) {
				map[cz][cy][cx] = map[z][y][x] + 1;
				visited[cz][cy][cx] = true;
				num++;
				q.push(make_tuple(cz, cy, cx));
				if (m < map[cz][cy][cx]) {
					m = map[cz][cy][cx];
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b >> c;
	int min = 0;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < a; k++) {
				cin >> d;
				if (d == 1) {
					visited[i][j][k] = true;
					q.push(make_tuple(i, j, k));
					num++;
				}
				else if (d == -1) {
					min++;
				}
				map[i][j][k] = d;
			}
		}
	}
	if (a * b * c - min == num) {
		cout << 0;
	}
	else {
		DFS();
		if (a * b * c - min > num) {
			cout << -1;
		}
		else {
			cout << m - 1;
		}
	}
}