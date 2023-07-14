#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a;
	int b;
	cin >> a >> b;

	int c = 45 - b;

	if (a == 0) {
		if (b >= 45) {
			cout << a << " " << b - 45 << endl;
		}
		else {
			cout << "23" << " " << 60 - c << endl;
		}
	}

	else {
		if (b >= 45) {
			cout << a << " " << b - 45 << endl;
		}
		else {
			cout << a - 1 << " " << 60 - c << endl;
		}
	}
}