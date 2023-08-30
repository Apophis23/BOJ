#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;
char arr[100][100];
bool visited[100][100] = {false, };
int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0,0, -1, 1 };
int a, cnt = 0;
char c;

void dfs(int x, int y) {
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= a || ny < 0 || ny >= a) {
			continue;
		}
		if (visited[nx][ny]!=true && arr[x][y] == arr[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (visited[i][j] != true) {
				dfs(i, j);
				cnt++;
			}
		}
	}

	cout << cnt<<" ";

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (arr[i][j] == 'R') {
				arr[i][j] = 'G';
			}
			visited[i][j] = false;
		}
	}

	cnt = 0;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (visited[i][j] != true) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt;
}