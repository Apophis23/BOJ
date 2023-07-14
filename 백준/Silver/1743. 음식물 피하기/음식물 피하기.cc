#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int num = 1;
int a, b, c, d, e;
bool visited[101][101];
int map[101][101] = { 0, };
int changey[4] = { -1,1,0,0 };
int changex[4] = { 0,0,-1,1 };

void DFS(int ax, int bx) {
	visited[ax][bx] = true;
	for (int i = 0; i < 4; i++) {
		int cx = bx + changex[i];
		int cy = ax + changey[i];
		if (cx<0 || cx>=b || cy<0 || cy>=a) {
			continue;
		}
		if (map[cy][cx] == 1 && visited[cy][cx] == false) {
			num++;
			DFS(cy, cx);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int max = 0;
	cin >> a >> b >> c;
	for (int i = 0; i < c; i++) {
		cin >> d >> e;
		map[d - 1][e - 1] = 1;
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (map[i][j] == 1 && visited[i][j] == false) {
				DFS(i, j);
				if (num > max) {
					max = num;
				}
				num = 1;
			} 
		}
	}
	cout << max;
}