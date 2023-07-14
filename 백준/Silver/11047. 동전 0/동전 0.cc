#include <iostream>
using namespace std;
int arr[10] = { 0, };

int main() {
	int count = 0, plus = 0, money = 0, ans = 0;
	cin >> count >> plus;
	for (int i = 0; i < count; i++) {
		cin >> money;
		arr[i] = money;
	}
	for (int j = count - 1; j >= 0; j--) {
		ans += plus / arr[j];
		plus %= arr[j];
	}
	cout << ans;
}