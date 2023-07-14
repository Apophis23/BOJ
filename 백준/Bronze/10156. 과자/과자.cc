#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0, number = 0, nim = 0;
	cin >> num >> number >> nim;
	if (num*number - nim < 0) {
		cout << 0;
	}
	else {
		cout << num * number - nim;
	}
}