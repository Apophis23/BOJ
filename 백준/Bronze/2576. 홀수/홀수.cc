#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0, number = 0, min = 100;
	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2 == 1) {
			number += num;
			if (min > num) {
				min = num;
			}
		}
	}
	if (number == 0) {
		cout << -1;
	}
	else {
		cout << number << "\n" << min;
	}
}