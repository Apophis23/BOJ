#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	int result=0;
	string str;

	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> str;
		int alpa[26] = { 0, };
		int count = 0;

		for (int j = 0; j < str.length(); j++) {
			alpa[str[j] - 'a'] += 1;
			if (str[j] == str[j + 1]) {
				alpa[str[j] - 'a'] -= 1;
			}
		}
		for (int k = 0; k < 26; k++) {
			if (alpa[k] > 1) {
				count = 1;
			}
		}
		if (count == 0) {
			result += 1;
		}
	}
	cout << result;
}