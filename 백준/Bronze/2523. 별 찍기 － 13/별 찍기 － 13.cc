#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0;
	cin >> num;
	for (int i = 1; i <= num * 2 - 1; i++) {
		int count = num - i;
		if (count < 0) {
			for (int j = count; j > -1 * num; j--) {
				cout << "*";
			}
		}
		else {
			for (int j = count; j < num; j++) {
				cout << "*";
			}
		}
		cout << "\n";
	}
}