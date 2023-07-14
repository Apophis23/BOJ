#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int num = 0, mid = 0, middle = 0;
	cin >> num;
	mid = num - 1;
	for (int i = 0; i < 2 * num - 1; i++) {
		if (i < num - 1) {
			for (int i = mid; i < num; i++) {
				cout << "*";
			}
			for (int j = 0; j < mid * 2; j++) {
				cout << " ";
			}
			for (int k = mid; k < num; k++) {
				cout << "*";
			}
			mid -= 1;
		}
		else {
			for (int i = mid; i < num; i++) {
				cout << "*";
			}
			for (int j = 0; j < middle; j++) {
				cout << " ";
			}
			for (int k = mid; k < num; k++) {
				cout << "*";
			}
			mid += 1;
			middle += 2;
		}
		cout << "\n";
	}
}