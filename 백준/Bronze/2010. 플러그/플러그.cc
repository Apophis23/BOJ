#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0, number = 0, count = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		if (i != num - 1) {
			count += (number - 1);
		}
		else {
			count += number;
		}
		
	}
	cout << count;
}