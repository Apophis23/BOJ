#include <iostream>
using namespace std;
long long arr[100] = { 1,1,1, 0};

long long water(int n) {
	if (n < 3) {
		return arr[n];
	}
	if (arr[n] != 0) {
		return arr[n];
	}
	else {
		arr[n] = water(n - 3) + water(n - 2);
		return arr[n];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	long long num = 0, number = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		if (number <= 3) {
			cout << 1 << "\n";
		}
		else {
			cout << water(number - 4) + water(number - 3) << "\n";
		}
	}
}