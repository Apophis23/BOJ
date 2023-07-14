#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001] = { 0, };
int dp[10001] = { 0, };

int main() {
	int num = 0, number = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
		if (i < 2) {
			dp[i] = arr[i - 1] + number;
		}
		else if (i == 2) {
			dp[i] = max(arr[0] + number, arr[1] + number);
			dp[i] = max(dp[i - 1], dp[i]);
		}
		else {
			dp[i] = max(arr[i] + arr[i - 1] + dp[i - 3], arr[i] + dp[i - 2]);
			dp[i] = max(dp[i], dp[i - 1]);
		}
	}

	cout << dp[num-1];
}