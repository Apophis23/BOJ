#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	string str = "";

	for (int i = 0; i < n; i++) {
		str = str + to_string(n);
	}
	if (str.length() > m) {
		cout << str.substr(0, m);
	}
	else {
		cout << str;
	}
}