#include <iostream>
using namespace std;

int main() {
	int num = 0, number = 0, count = 0, result=0;
	cin >> num >> number;
	for (int i = 1; count<number; i++) {
		for (int j = 1; j <= i; j++) {
			count++;
			if (count >= num) {
				result += i;
			}
			if (count == number) {
				break;
			}
		}
	}
	cout << result;
}