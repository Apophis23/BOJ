#include <iostream>
#include <string>
using namespace std;
int main() {
	int num = 0, number = 0;
	string str;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		number = (int)str[0] + (int)str[2] - 96;
		cout << number << "\n";
	}
}