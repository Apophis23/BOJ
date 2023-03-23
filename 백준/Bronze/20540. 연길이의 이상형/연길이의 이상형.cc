#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	string str1 = "INFP";
	string str2 = "ESTJ";
	cin >> str;
	for (int i = 0; i < 4; i++) {
		if (str[i] == str1[i]) {
			str[i] = str2[i];
		}
		else {
			str[i] = str1[i];
		}
	}
	cout << str;
}