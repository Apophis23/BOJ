#include <iostream>
#include <algorithm>
using namespace std;
long long arr[5000000] = { 0, };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num = 0, num_t = 0;
	long long number;
	cin >> num >> num_t;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	sort(arr, arr + num);
	cout << arr[num_t - 1];
}