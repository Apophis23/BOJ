#include <iostream>
using namespace std;
int parent[1000001];

int find(int x) {
	if (parent[x] == x) {
		return x;
	}
	parent[x] = find(parent[x]);
	return parent[x];
}

void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) {
		return;
	}
	parent[y] = x;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, a, b, op;
	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		parent[i] = i;
	}
	for (int i = 0; i < m; i++) {
		cin >> op >> a >> b;
		if (op == 0) {
			merge(a, b);
		}
		else if (op == 1) {
			if (find(a) == find(b)) {
				cout << "YES" << "\n";
			}
			else {
				cout << "NO" << "\n";
			}
		}
	}
}