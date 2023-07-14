#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0, number = 0;
	cin >> num;
	for (int i = num; i>0; i--) {
		for (int k = 0; k < number; k++) {
			cout << " ";
		}
		for (int j = i * 2 - 1; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
		number++;
	}
}