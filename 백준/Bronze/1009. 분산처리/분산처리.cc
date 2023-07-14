#include <iostream>
using namespace std;

int main() {
	int num = 0, num_t = 0, number = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> num_t >> number;
		int result = num_t;
		for (int j = 2; j <= number; j++) {
			result = (result*num_t) % 10;
		}
		if (result % 10 == 0) {
			cout << 10 << "\n";
		}
		else {
			cout << result % 10 << "\n";
		}
	}
}