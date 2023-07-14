#include <iostream>
using namespace std;

int fac(int num) {
	if (num <= 1) {
		return 1;
	}
	else {
		return num * fac(num - 1);
	}
}

int main() {
	int number = 0, result = 0;
	cin >> number;
	result = fac(number);
	cout << result;
}