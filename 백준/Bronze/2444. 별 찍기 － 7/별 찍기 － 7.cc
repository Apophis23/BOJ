#include <iostream>
#include <string>
using namespace std;
int main() {
	int num = 0, count = 0, middle = 0, mid = 0, jit=1;
	cin >> num;
	middle = num;
	mid = num;
	for (int i = 0; i < num * 2 - 1; i++) {
		if (i < num) {
			for (int j = mid - 1; j > 0; j--) {
				cout << " ";
			}
			count = i * 2 + 1;
			for (int k = 0; k < count; k++) {
				cout << "*";
			}
			mid -= 1;
		}
		else {
			for (int j = 0; j < jit; j++) {
				cout << " ";
			}
			for (int k = (middle-2)*2+1; k >0; k--) {
				cout << "*";
			}
			middle -= 1;
			jit++;
		}
		cout << "\n";
	}
}
