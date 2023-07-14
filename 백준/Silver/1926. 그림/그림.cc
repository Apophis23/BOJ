#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int a, b, c, d, e;
int changey[4] = { -1, 1, 0, 0 };
int changex[4] = { 0,0,-1, 1 };
int map[500][500];
bool visited[500][500];
int number = 0;
vector<int> vec;

void DFS(int ax, int bx) {
	visited[ax][bx] = true;
	number++;
	for (int i = 0; i < 4; i++) {
		int cy = ax + changey[i];
		int cx = bx + changex[i];
		if (cy >= a || cy < 0 || cx >= b || cx < 0) {
			continue;
		}
		if (visited[cy][cx] == false && map[cy][cx]==1) {
			DFS(cy, cx);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b;
	int num = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> c;
			map[i][j] = c;
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (visited[i][j] == false && map[i][j] == 1) {
				DFS(i, j);
				num++;
				vec.push_back(number);
				number = 0;
			}
		}
	}
	if (num == 0) {
		vec.push_back(0);
	}
	sort(vec.begin(), vec.end(), greater<>());
	cout << num << "\n";
	cout << vec[0];
}