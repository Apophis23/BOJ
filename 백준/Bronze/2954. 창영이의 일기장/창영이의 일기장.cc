#include <iostream>
#include <string>
using namespace std;

int main() {
	char arr[100] = { '0' };
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		arr[i] = str[i];
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
			arr[i + 1] = '0';
			arr[i + 2] = '0';
			i += 2;
		}
	}
	for (int i = 0; i < str.length(); i++) {
		if (arr[i] == '0') {
			continue;
		}
		cout << arr[i];
	}
}