#include <iostream>
using namespace std;

int main() {
	int num = 0, number = 0, result = 0;
	cin >> num;
	for (int i = 0; i < 9; i++) {
		cin >> number;
		result += number;
	}
	cout << num - result;
}