#include <iostream>
using namespace std;
int main() {
	int num = 0, number = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (num < 40) {
			number += 40;
		}
		else {
			number += num;
		}
	}
	cout << number / 5;
}