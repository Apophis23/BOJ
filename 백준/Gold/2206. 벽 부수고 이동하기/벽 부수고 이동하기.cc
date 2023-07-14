#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;
int a = 0, b = 0;
int map[1001][1001];
bool visited[2][1001][1001];
int result[2][1001][1001] = {};
int cx[4] = { 0,0,-1, 1 };
int cy[4] = { -1, 1, 0, 0 };
queue <tuple<int, int, bool>> q;


void BFS(int ax, int bx) {
	visited[1][ax][bx] = true;
	visited[0][ax][bx] = true;
	q.push(make_tuple(ax, bx, false));
	while (!q.empty()) {
		auto f = q.front();
		q.pop();
		int x = get<1>(f);
		int y = get<0>(f);
		bool check = get<2>(f);
		for (int i = 0; i < 4; i++) {
			int nx = x + cx[i];
			int ny = y + cy[i];
			if (nx < 0 || nx >= b || ny < 0 || ny >= a) {
				continue;
			}
			if (check == true) {
				if (visited[0][ny][nx] == false && map[ny][nx] != 1) {
					if (result[0][ny][nx] == 0 || result[0][ny][nx] > result[0][y][x] + 1) {
						result[0][ny][nx] = result[0][y][x] + 1;
					}
					visited[0][ny][nx] = true;
					q.push(make_tuple(ny, nx, check));
				}
			}
			else if (check == false) {
				if (map[ny][nx] == 1) {
					result[0][ny][nx] = result[1][y][x] + 1;
					visited[0][ny][nx] = true;
					q.push(make_tuple(ny, nx, true));
				}
				if (map[ny][nx] != 1 && visited[1][ny][nx] == false) {
					result[1][ny][nx] = result[1][y][x] + 1;
					if (result[0][ny][nx] == 0 || result[0][ny][nx] > result[1][y][x] + 1) {
						result[0][ny][nx] = result[1][y][x] + 1;
					}
					visited[1][ny][nx] = true;
					q.push(make_tuple(ny, nx, check));
				}
			}
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b;
	result[0][0][0] = result[1][0][0] = 1;
	string str;
	for (int i = 0; i < a; i++) {
		cin >> str;
		for (int j = 0; j < b; j++) {
			map[i][j] = str[j] - '0';
		}
	}
	BFS(0, 0);
	if (result[0][a - 1][b - 1] == 0 && result[1][a - 1][b - 1] == 0) {
		cout << -1;
	}
	else {
		if (result[1][a - 1][b - 1] == 0) {
			cout << result[0][a - 1][b - 1];
		}
		else {
			cout << min(result[0][a - 1][b - 1], result[1][a - 1][b - 1]);
		}
	}
}