#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	char result[100] = { '0', };
	int count = 1;
	cin >> str;
	result[0] = str[0];
	for (int i = 1; i < str.length(); i++) {
		if (str[i] == '-') {
			result[count] = str[i + 1];
			count++;
		}
	}
	for (int i = 0; i < count; i++) {
		cout << result[i];
	}
}