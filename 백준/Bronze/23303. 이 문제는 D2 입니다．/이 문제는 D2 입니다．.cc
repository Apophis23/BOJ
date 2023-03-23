#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int position;
	int pos;
	position = str.find("d2");
	pos = str.find("D2");
	if (position == -1 && pos == -1) {
		cout << "unrated";
	}
	else {
		cout << "D2";
	}
}