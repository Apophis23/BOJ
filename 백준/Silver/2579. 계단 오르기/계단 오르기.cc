#include <iostream>
using namespace std;
long long arr[300] = { 0, };
long long stair[300] = { 0, };

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int num = 0, number = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		stair[i] = number;
		if (i == 0) {
			arr[0] = number;
		}
	}
	arr[1] = stair[0] + stair[1];
	arr[2] = max(stair[0] + stair[2], stair[1] + stair[2]);

	for (int i = 3; i < num; i++) {
		arr[i] = max(arr[i - 2] + stair[i], arr[i-3] + stair[i - 1] + stair[i]);
	}
	cout << arr[num - 1];
}