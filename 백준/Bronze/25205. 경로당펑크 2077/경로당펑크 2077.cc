#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	string str;
	cin >> a >> str;
	char last = str.at(str.length() - 1);
	if (last == 'y' || last == 'u' || last == 'i' || last == 'o' || last == 'p' || last == 'h' || last == 'j' || last == 'k' || last == 'l' || last == 'b' || last == 'n' || last == 'm') {
		cout << 0;
	}
	else {
		cout << 1;
	}
}