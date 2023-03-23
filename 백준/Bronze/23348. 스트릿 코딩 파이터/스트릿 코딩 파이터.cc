#include<iostream>
using namespace std;
int arr[3] = { 0, };

int main() {
	int num = 0, number = 0, person = 0, result = 0, max = 0;
	for (int i = 0; i < 3; i++) {
		cin >> number;
		arr[i] = number;
	}
	cin >> number;
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				cin >> person;
				if (k == 0) {
					person = arr[0] * person;
					result += person;
				}
				if (k == 1) {
					person = arr[1] * person;
					result += person;
				}
				if (k == 2) {
					person = arr[2] * person;
					result += person;
				}
			}
		}
		if (max < result) {
			max = result;
		}
		result = 0;
	}
	cout << max;
}