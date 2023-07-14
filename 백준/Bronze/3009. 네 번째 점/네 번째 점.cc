#include <iostream>
using namespace std;

int main() {
	int x = 0, y = 0;
	int arr[4] = { 0, };
	int ayr[4] = { 0, };
	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		arr[i] = x;
		ayr[i] = y;
	}
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arr[i] == arr[j]) {
				arr[j] = 0;
				arr[i] = 0;
			}
			if (ayr[i] == ayr[j]) {
				ayr[j] = 0;
				ayr[i] = 0;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		if (arr[i] != 0) {
			arr[3] = arr[i];
		}
		if (ayr[i] != 0) {
			ayr[3] = ayr[i];
		}
	}
	cout << arr[3] << " " << ayr[3];
}