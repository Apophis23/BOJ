#include <iostream>
using namespace std;

int main() {
	int num = 0, number = 0, temp = 0;
	int arr[3];
	for (int i = 0; i < 3; i++) {
		cin >> number;
		arr[i] = number;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}
}