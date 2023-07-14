#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int num = 0, mid = 0, middle = 0;
	cin >> num;
	mid = 2 * num - 1;
	middle = num - 1;
	for (int i = 0; i < num * 2 - 1; i++) {
		if (i < num-1) {
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int k = 0; k < mid; k++) {
				cout << "*";
			}
			mid -= 2;
		}
		else {
			for (int j = middle; j > 0; j--) {
				cout << " ";
			}
			for (int k = 0; k < mid; k++) {
				cout << "*";
			}
			mid += 2;
			middle -= 1;
		}
		cout << "\n";
	}
}