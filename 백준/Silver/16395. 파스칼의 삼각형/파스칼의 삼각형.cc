#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;
long long arr[31][31];

void pc(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int row, col;
	cin >> row >> col;
	pc(row);
	cout << arr[row - 1][col - 1];
}