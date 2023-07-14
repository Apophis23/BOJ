#include <iostream>
using namespace std;

int main() {

	int a, b, c, d;
	int count = 0;
	int number;
	int result;

	cin >> number;
	result = number;

	while (true) {

		a = number / 10;
		b = number % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		number = d;
		count++;

		if (d == result) {
			break;
		}

	}
	cout << count;
}