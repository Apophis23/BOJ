#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	while (true) {
		cin >> str;
		if (str == "0") {
			break;
		}
		int count = str.length() - 1;
		bool check = true;
		for (int i = 0; i < str.length() / 2; i++) {
			if (str[i] != str[count]) {
				check = false;
				break;
			}
			count--;
		}
		if (check == true) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}
}