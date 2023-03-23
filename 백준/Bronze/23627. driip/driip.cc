#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string syr = "driip";
	int j = 0;
	bool check = true;
	cin >> str;
	if (str.length() < 5) {
		check = false;
	}
	for (int i = str.length() - 5; i < str.length(); i++) {
		if (str[i] != syr[j]) {
			check = false;
			break;
		}
		j++;
	}
	if (check == false) {
		cout << "not cute";
	}
	else {
		cout << "cute";
	}
}