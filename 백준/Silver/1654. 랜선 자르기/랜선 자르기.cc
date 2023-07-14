#include <iostream>
using namespace std;
long long arr[10005] = { 0, };
int num = 0, number = 0, k = 0;

bool solve(long long a) {
	long long cur = 0;
	for (int i = 0; i < num; i++) {
		cur += arr[i] / a;
	}
	return cur >= number;
}

int main() {
	cin >> num >> number;
	for (int i = 0; i < num; i++) {
		cin >> k;
		arr[i] = k;
	}
	long long st = 1;
	long long en = 2147483648;
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