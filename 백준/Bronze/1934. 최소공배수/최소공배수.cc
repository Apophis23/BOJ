#include <iostream>
using namespace std;

int function(int a, int b) {
	int result;
	if (a < b) {
		int temp = b;
		b = a;
		a = temp;
	}
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	result = a;
	return result;
}

int main() {
	int num = 0, one = 0, two = 0, min = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> one >> two;
		min = function(one, two);
		cout << (one*two) / min << "\n";
	}
}