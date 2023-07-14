#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long arr[501] = { 0, };
long long ans[501] = { 0, };

long long max(int a, int b) {
	return a >= b ? a : b;
}

int main() {
	int num = 0, number = 0, count = 1, result = 0;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> number;
			if (i == 1) {
				arr[i] = number;
			}
			else {
				if (j == 1) {
					arr[j] = ans[1] + number;
				}
				else if (j == i) {
					arr[j] = ans[i - 1] + number;
				}
				else {
					arr[j] = max(ans[j - 1], ans[j]) + number;
				}
			}
		}
		for (int k = 1; k <= i; k++) {
			ans[k] = arr[k];
		}
	}
	sort(ans + 1, ans + num+1);
	cout << ans[num];
}