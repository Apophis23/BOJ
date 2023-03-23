#include <iostream>
#include <algorithm>
using namespace std;
int arr[101] = { 0, };

int main() {
	int num = 0, number = 0, result = 0;
	cin >> num >> number;
	arr[0] = number;
	for (int i = 1; i <= num; i++) {
		cin >> number;
		arr[i] = number;
		if (arr[i] >= arr[i - 1]) {
			result += min(arr[i] - arr[i - 1], 360 - arr[i] + arr[i - 1]);
		}
		else {
			result += min(arr[i - 1] - arr[i], 360 - arr[i - 1] + arr[i]);
		}
	}
	cout << result;
}