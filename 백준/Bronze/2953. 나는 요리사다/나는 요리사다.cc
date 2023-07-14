#include <iostream>
using namespace std;

int main() {
	int number = 0, max = 0, person = 0;
	for (int i = 0; i < 5; i++) {
		int result = 0;
		for (int j = 0; j < 4; j++) {
			cin >> number;
			result += number;
		}
		if (result > max) {
			max = result;
			person = i;
		}
	}
	cout << person + 1 << " " << max;
}