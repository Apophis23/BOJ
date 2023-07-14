#include <iostream>
using namespace std;
long long arr[1000000] = { 0, 0, };

long long min(int a, int b, int c) {
	int min;
	if (a <= b) {
		min = a;
	}
	else {
		min = b;
	}
	if (min >= c) {
		min = c;
	}
	return min;
}

int main() {
	int num = 0;
	cin >> num;
	for (int i = 2; i <= num; i++) {
		int a = 1000000, b = 1000000, c = 1000000;
		a = arr[i - 1] + 1;
		if (i % 2 == 0) {
			b = arr[i / 2] + 1;
		}
		if (i % 3 == 0) {
			c = arr[i / 3] + 1;
		}
		arr[i] = min(a, b, c);
	}
	cout << arr[num];
}