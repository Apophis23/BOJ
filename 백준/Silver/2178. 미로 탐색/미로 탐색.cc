#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int a, b, c, d;
queue < pair<int, int>> q;
bool visited[101][101];
int map[101][101];
int dist[101][101];
int ud[4] = { -1, 1, 0, 0 };
int lr[4] = { 0, 0, -1, 1 };
int cnt = 0;

void BFS(int n, int m) {
	visited[n][m] = true;
	dist[n][m] = 1;
	q.push(make_pair(n, m));
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int cy = y + ud[i];
			int cx = x + lr[i];
			if (cy < 0 || cy >= a || cx < 0 || cx >= b) {
				continue;
			}
			if (map[cy][cx] == 1 && visited[cy][cx] == false) {
				dist[cy][cx] = dist[y][x] + 1;
				visited[cy][cx] = 1;
				q.push(make_pair(cy, cx));
			}
		}
	}
	cout << dist[a-1][b-1];
}

int main() {
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		string row;
		cin >> row;
		for (int j = 0; j < b; j++) {
			visited[i][j] = 0;
			dist[i][j] = 0;
			if (row[j] == '1') {
				map[i][j] = 1;
			}
			else {
				map[i][j] = 0;
			}
		}
	}
	BFS(0, 0);
}