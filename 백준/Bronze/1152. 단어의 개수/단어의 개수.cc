#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 1;
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	if (str[str.length() - 1] == ' ') {
		count--;
	}
	if (str[0] == ' '){
		count--;
	}
	cout << count;
}