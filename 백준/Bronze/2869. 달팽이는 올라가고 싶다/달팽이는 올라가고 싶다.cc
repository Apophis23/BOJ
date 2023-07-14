#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0, count, loud = 0;
	cin >> a >> b >> c;
	count = (c - a) % (a - b);
	loud = (c - a) / (a - b);
	if (count == 0) {
		cout << loud + 1;
	}
	else {
		cout << loud + 2;
	}
}