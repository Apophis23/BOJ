#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int n = 0, m = 0, u=0, count=0;
	char f = '0';
	int alpa[26] = { 0, };
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		n = str[i];
		if (n > 96) {
			alpa[n - 97]+=1;
		}
		else {
			alpa[n - 65] += 1;
		}
	}

	for (int j = 0; j < 26; j++) {
		if (alpa[j] > m) {
			m = alpa[j];
			u = j;
		}
	}

	for (int k = 0; k < 26; k++) {
		if (m == alpa[k]) {
			count++;
		}
	}

	if (count > 1) {
		cout << "?";
	}
	else {
		u += 65;
		cout << (char)u;
	}
}