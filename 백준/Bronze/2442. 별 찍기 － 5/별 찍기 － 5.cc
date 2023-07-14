#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = num-i-1; j > 0; j--) {
			cout << " ";
		}
		for (int k = 0; k < 2*i+1; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}