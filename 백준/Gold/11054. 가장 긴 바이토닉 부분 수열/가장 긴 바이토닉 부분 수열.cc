#include <iostream>
using namespace std;
int arr[1000] = { 0, };
int ayr[1000] = { 0, };
int axr[1000] = { 0, };

int main() {
	int num = 0, number = 0, store = 0, max = 0, max_two = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	for (int i = 0; i < num; i++) {
		int min = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (min < ayr[j]) {
					min = ayr[j];
				}
			}
		}
		ayr[i] = min + 1;
	}
	for (int i = num - 1; i >= 0; i--) {
		int min = 0;
		for (int j = num - 1; j > i; j--) {
			if (arr[i] > arr[j]) {
				if (min < axr[j]) {
					min = axr[j];
				}
			}
		}
		axr[i] = min + 1;
	}
	for (int i = 0; i < num; i++) {
		if (axr[i] + ayr[i] - 1 > max) {
			max = axr[i] + ayr[i] - 1;
		}
	}

	cout << max;
}