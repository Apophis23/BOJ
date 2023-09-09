#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <climits>
using namespace std;
vector <vector<long>> v(501, vector <long>(501, 0));
vector <long> cost;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num = 0, file_num = 0, size = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> file_num;
		cost.push_back(0);
		for (int j = 0; j < file_num; j++) {
			cin >> size;
			cost.push_back(cost[j] + size);
		}
		for (int tx = 1; tx < file_num; tx++) {
			for (int ty = 1; ty <= file_num - tx; ty++) {
				int x = ty;
				int y = tx + ty;
				v[x][y] = INT_MAX;
				for (int k = x; k < y; k++) {
					v[x][y] = min(v[x][y], v[x][k] + v[k + 1][y] + cost[y] - cost[x - 1]);
				}
			}
		}
		cout << v[1][file_num] << "\n";
		fill(v.begin(), v.end(), vector<long>(501, 0));
		cost.clear();
	}
}