#include<iostream>
using namespace std;

int main() {
	int num = 0, number = 0;
	for (int i = 0; i < 4; i++) {
		cin >> num;
		number += num;
	}
	cout << number / 60 << "\n" << number % 60;
}