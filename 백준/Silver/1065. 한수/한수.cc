#include <iostream>
using namespace std;

int main() {
	int ace = 0, second = 0, third = 0, forth = 0, fifth = 0, sixth = 0, seven = 0;
	int number = 0;
	cin >> ace;
	for (int i = 1; i <= ace; i++) {
		if (i < 100) {
			number++;
		}
		else if (i >= 100) {
			second = i/ 100;
			third = i % 100;
			forth = third / 10;
			fifth = third % 10;
			sixth = fifth - forth;
			seven = forth - second;
			if (sixth == seven) {
				number++;
			}
		}
	}
	cout << number;
}