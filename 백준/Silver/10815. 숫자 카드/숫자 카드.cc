#include <iostream>
#include <algorithm>
using namespace std;
long long arr[500000] = { 0, };
long long num = 0, number = 0, num_t = 0;

bool binaryserch(long long n) {
	int st = 0;
	int en = num - 1;
	while (en >= st) {
		int mid = (st + en) / 2;
		if (arr[mid] > n) {
			en = mid - 1;
		}
		else if (arr[mid] < n) {
			st = mid + 1;
		}
		else {
			return 1;
		}
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	sort(arr, arr + num);
	cin >> num_t;
	for (int i = 0; i < num_t; i++) {
		cin >> number;
		cout << binaryserch(number) << " ";
	}
}