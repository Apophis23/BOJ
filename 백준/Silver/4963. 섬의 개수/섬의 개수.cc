#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int a, b, c, d, e, f;
int map[50][50];
bool visited[50][50];
int changex[8] = { 0,0,-1,1,-1,1,-1,1 };
int changey[8] = { -1,1,0,0,-1,-1,1,1 };
int result = 0;


void DFS(int y, int x) {
	visited[y][x] = true;
	for (int i = 0; i < 8; i++) {
		int cx = x + changex[i];
		int cy = y + changey[i];
		if (cx < 0 || cx >= a || cy < 0 || cy >= b) {
			continue;
		}
		if (visited[cy][cx] == false && map[cy][cx] == 1) {
			DFS(cy, cx);
		}
	}
}

void initial() {
	memset(map, 0, sizeof(map));
	memset(visited, 0, sizeof(visited));
	result = 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < a; j++) {
				cin >> c;
				map[i][j] = c;
			}
		}
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < a; j++) {
				if (visited[i][j] == false && map[i][j] == 1) {
					result++;
					DFS(i, j);
				}
			}
		}
		cout << result << "\n";
		initial();
	}
}