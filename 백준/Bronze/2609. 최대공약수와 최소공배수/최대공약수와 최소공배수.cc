#include <iostream>
#include <string>
using namespace std;
int arr[10000] = { 0, };
int ayt[10000] = { 0, };

int main() {
	int num = 0, number = 0, min = 0, max = 0, boolean = 0;
	cin >> num >> number;
	for (int i = 1; i <= num; i++) {
		if (num%i==0) {
			arr[i] = 1;
		}
	}
	for (int i = 1; i <= number; i++) {
		if (number%i == 0) {
			ayt[i] = 1;
		}
	}
	if (num > number) {
		for (int i = 1; i <= number; i++) {
			if (ayt[i] == 1 && arr[i] == 1) {
				min = i;
			}
		}
	}
	else {
		for (int i = 1; i <= number; i++) {
			if (ayt[i] == 1 && arr[i] == 1) {
				min = i;
			}
		}
	}
	for (int i = 1; ; i++) {
		for (int j = 1; num*i >= number*j; j++) {
			if (num*i == number * j) {
				max = num * i;
				boolean = 1;
				break;
			}	
		}
		if (boolean == 1) {
			break;
		}
	}
	cout << min << "\n" << max;
}