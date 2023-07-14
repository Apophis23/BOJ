#include <iostream>
using namespace std;

int main() {
	int num = 0, number = 0, max = -5000000, result = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		result += number;
		if (result > max) {
			max = result;
		}
		if (result < 0) {
			result = 0;
		}
	}
	cout << max;
}