#include <iostream>
using namespace std;
long long arr[1000005] = { 0, };
long long a = 0, b = 0, c = 0;

bool solve(long long k) {
	long long cur = 0;
	for (int i = 0; i < a; i++) {
		if (arr[i] - k > 0) {
			cur += arr[i] - k;
		}
	}
	return cur >= b;
}

int main() {
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> c;
		arr[i] = c;
	}
	long long st = 0;
	long long en = 2000000000;
	while (st < en) {
		long long mid = (st + en + 1) / 2;
		if (solve(mid) == true) {
			st = mid;
		}
		else {
			en = mid - 1;
		}
	}
	cout << st;
}