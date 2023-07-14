#include <iostream>
#include <string>
using namespace std;

int main() {
	long long num = 0, number = 0;
	cin >> num >> number;
	if (num > number) {
		num = num - number;
	}
	else {
		num = number - num;
	}
	cout << num;
}