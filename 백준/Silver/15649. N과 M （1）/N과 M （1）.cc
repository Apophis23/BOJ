#include <iostream>
using namespace std;

int n = 0, m = 0;
int arr[10] = { 0, };
bool isused[10] = { 0, };

void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int j = 1; j <= n; j++) {
		if (isused[j] != true) {
			arr[k] = j;
			isused[j] = true;
			func(k + 1);
			isused[j] = false;
		}
	}
}

int main(void) {
	cin >> n >> m;
	func(0);
}