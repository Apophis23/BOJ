#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c = 1, d = 1, e = 0;
	cin >> a;
	while (1) {
		if (a <= b) {
			break;
		}
		b += c;
		c++;
	}
	c--;
	b -= c;
	e = c;
	for (int i = b; i < a - 1; i++) {
			c--;
			d++;
		}
	if (e % 2 == 0) {
		cout << d << "/" << c;
	}
	else {
		cout << c << "/" << d;
	}
}