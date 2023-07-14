#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (b >= a&&a >= c) {
		cout << a << endl;
	}
	else if (c >= a&&a >= b) {
		cout << a << endl;
	}
	else if (a >= b&&b >= c) {
		cout << b << endl;
	}
	else if (c >= b&&b >= a) {
		cout << b << endl;
	}
	else if (a >= c&&c >= b) {
		cout << c << endl;
	}
	else {
		cout << c << endl;
	}
}