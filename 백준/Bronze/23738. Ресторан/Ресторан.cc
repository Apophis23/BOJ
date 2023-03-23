#include <iostream>
#include <string>
using namespace std;

int main() {
	string st, syr;
	cin >> st;
	for (int i = 0; i < st.length(); i++) {
		if (st[i] == 'A' || st[i] == 'K' || st[i] == 'M' || st[i] == 'O' || st[i] == 'T') {
			syr += tolower(st[i]);
		}
		else if (st[i] == 'B') {
			syr += 'v';
		}
		else if (st[i] == 'E') {
			syr += "ye";
		}
		else if (st[i] == 'H') {
			syr += 'n';
		}
		else if (st[i] == 'P') {
			syr += 'r';
		}
		else if (st[i] == 'C') {
			syr += 's';
		}
		else if (st[i] == 'Y') {
			syr += 'u';
		}
		else if (st[i] == 'X') {
			syr += 'h';
		}
	}
	cout << syr;
}