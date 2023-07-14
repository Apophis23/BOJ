#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	if (str.find('M') != -1 && str.find('O') != -1 && str.find('B') != -1 && str.find('I') != -1 && str.find('S') != -1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}