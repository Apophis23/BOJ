#include <iostream>
using namespace std;

int min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	int num = 0, number = 0;
	cin >> num >> number;
	cout << min(num, number) / 2;
}