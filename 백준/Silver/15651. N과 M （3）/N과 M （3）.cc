#include <iostream>
using namespace std;

int n = 0, m = 0;
int arr[8] = { 0, };

void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int j = 1; j <= n; j++) {
		arr[k] = j;
		func(k + 1);
	}
}

int main() {
	cin >> n >> m;
	func(0);
}