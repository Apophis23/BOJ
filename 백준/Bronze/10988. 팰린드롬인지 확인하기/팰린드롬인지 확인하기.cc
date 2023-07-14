#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	bool check = true;
	cin >> str;
	int count = str.length() - 1;
	for (int i = 0; i < str.length() / 2; i++) {
		if (str[i] != str[count]) {
			check = false;
			break;
		}
		count--;
	}
	cout << check;
}