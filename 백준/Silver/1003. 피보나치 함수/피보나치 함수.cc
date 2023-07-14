#include <iostream>
using namespace std;
int arr[41] = { 0,1, };

int fibonaci(int n) {
	if (n == 0 || n == 1) {
		return arr[n];
	}
	if (arr[n] != 0) {
		return arr[n];
	}
	else {
		arr[n] = fibonaci(n - 2) + fibonaci(n - 1);
		return arr[n];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num = 0, number = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		if (number == 0) {
			cout << 1 << " " << 0 << "\n";
		}
		else {
			cout << fibonaci(number - 1) << " " << fibonaci(number) << "\n";
		}
	}
}