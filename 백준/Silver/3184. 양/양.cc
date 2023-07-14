#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a, b;
int middles = 0, middlew = 0;
char c;
int changex[4] = { 0,0,-1,1 };
int changey[4] = { -1, 1, 0, 0 };
char map[250][250];
bool visited[250][250];

void DFS(int ax, int bx) {
	visited[ax][bx] = true;
	for (int i = 0; i < 4; i++) {
		int cx = bx + changex[i];
		int cy = ax + changey[i];
		if (cx < 0 || cx >= b || cy < 0 || cy >= a) {
			continue;
		}
		if (visited[cy][cx] == false && map[cy][cx] != '#') {
			if (map[cy][cx] == 'v') {
				middlew++;
			}
			if (map[cy][cx] == 'o') {
				middles++;
			}
			DFS(cy, cx);
		}
	}
}

int main() {
	cin >> a >> b;
	int sheep = 0, wolf = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'o') {
				sheep++;
			}
			if (map[i][j] == 'v') {
				wolf++;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (map[i][j]=='#'&& visited[i][j] == false) {
				DFS(i, j);
				if (middles > middlew) {
					wolf=wolf - middlew;
				}
				else {
					sheep=sheep - middles;
				}
				middles = 0;
				middlew = 0;
			}
		}
	}
	cout << sheep << " " << wolf;
}