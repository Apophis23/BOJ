#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	int first, second;
	cin >> a >> b >> c >> d >> e;
	if (b % d == 0) {
		first = b / d;
	}
	else {
		first = b / d + 1;
	}
	if (c % e == 0) {
		second = c / e;
	}
	else {
		second = c / e + 1;
	}
	f = first > second ? first : second;
	cout << a - f;
}