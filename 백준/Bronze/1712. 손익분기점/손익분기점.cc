#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	if (b >= c) {
		cout << "-1";
	}
	else {
		cout << a / (c - b)+1;
	}
}