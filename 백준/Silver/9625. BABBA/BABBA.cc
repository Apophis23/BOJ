#include <iostream>
using namespace std;
int dp[45] = { 1, 1,  };

int main() {
	int num = 0;
	cin >> num;
	if (num == 1) {
		cout << 0 << " " << 1;
	}
	else {
		for (int i = 2; i < num; i++) {
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		cout << dp[num - 2] << " " << dp[num - 1];
	}
}