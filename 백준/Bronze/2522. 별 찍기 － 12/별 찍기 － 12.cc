#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int num = 0, mid = 0, middle = 0;
	cin >> num;
	mid = num-1;
	middle = num;
	for (int i = 0; i < 2 * num - 1; i++) {
		if (i < num-1) {
			for (int j = mid; j > 0; j--) {
				cout << " ";
			}
			for (int k = mid; k < num; k++) {
				cout << "*";
			}
			mid--;
		}
		else {
			for (int j = 0; j < mid; j++) {
				cout << " ";
			}
			for (int k = 0; k < middle; k++) {
				cout << "*";
			}
			mid++;
			middle--;
		}
		cout << "\n";
	}
}