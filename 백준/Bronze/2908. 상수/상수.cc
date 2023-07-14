#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str, sty;
	cin >> str >> sty;
	reverse(str.begin(), str.end());
	reverse(sty.begin(), sty.end());
	
	if (str < sty) {
		cout << sty;
	}
	else if (str > sty) {
		cout << str;
	}
}