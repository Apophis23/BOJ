#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[25][25];
bool visited[25][25];
vector<int> vec;
int updown[4] = { -1, 1, 0, 0 };
int leftright[4] = {0,0, -1, 1};
int a, b;
int cnt = 0;
int group = 0;

void dfs(int m, int n) {
	visited[m][n] = true;
	for (int i = 0; i < 4; i++) {
		int x = n + leftright[i];
		int y = m + updown[i];
		if (x < 0 || x >= a || y < 0 || y >= a) {
			continue;
		}
		if (visited[y][x] != true && map[y][x] == 1) {
			cnt += 1;
			dfs(y, x);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a;
	string str;
	for (int i = 0; i < a; i++) {
		cin >> str;
		for (int j = 0; j < a; j++) {
			visited[i][j] = false;
			if (str[j] == '1') {
				map[i][j] = 1;
			}
			else {
				map[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (visited[i][j] == false&&map[i][j]==1) {
				cnt = 1;
				dfs(i, j);
				vec.push_back(cnt);
				group++;
			}
		}
	}
	sort(vec.begin(), vec.end());
	cout << group << "\n";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << "\n";
	}
}