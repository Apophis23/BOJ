#include <iostream>
using namespace std;
int arr[100] = { 0, };
int function(int a, int b) {
	if (a < b) {
		int temp = b;
		b = a;
		a = temp;
	}
	while (b != 0) {
		int result = a % b;
		a = b;
		b = result;
	}
	return a;
}

int main() {
	int num = 0, number = 0, result = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	for (int i = 1; i < num; i++) {
		if (arr[0] % arr[i] == 0 && arr[0] > arr[i]) {
			cout << arr[0] / arr[i] << "/" << 1 << "\n";
		}
		else if (arr[0] % arr[i] == 0 && arr[0] <= arr[i]) {
			cout << 1 << "/" << arr[i] / arr[0] << "\n";
		}
		else if (arr[0] % arr[i] != 0 && arr[0] <= arr[i]) {
			result = function(arr[i], arr[0]);
			cout << arr[0] / result << "/" << arr[i] / result << "\n";
		}
		else {
			result = function(arr[i], arr[0]);
			cout << arr[0] / result << "/" << arr[i] / result << "\n";
		}
	}
}