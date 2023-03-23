#include <iostream>
#include <string>

using namespace std;
int main() {
	int number = 0;
	cin >> number;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i+=number) {
		cout << str[i];
	}
}