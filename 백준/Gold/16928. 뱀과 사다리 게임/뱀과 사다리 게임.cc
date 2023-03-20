#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int a, b, c, d;
int laddersnake[101] = {0, };
int map[101] = { 0, };
int dice[6] = { 1,2,3,4,5,6 };
queue <int> q;

void BFS(int a) {
	map[a] = 0;
	q.push(a);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < 6; i++) {
			int next = x + dice[i];
			if (laddersnake[next] != 0) {
				next = laddersnake[next];
			}
			if (next > 100) {
				continue;
			}
			if (map[next] == 0 || map[next] > map[x] + 1) {
				map[next] = map[x] + 1;
				q.push(next);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> c >> d;
		laddersnake[c] = d;
	}
	for (int i = 0; i < b; i++) {
		cin >> c >> d;
		laddersnake[c] = d;
	}
	BFS(1);
	cout << map[100];
}