#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int x = 0, y = 0, z = 0, t = 0, u = 0;
	while (true) {
		cin >> x >> y >> z;
		t = max(x, y);
		u = min(x, y);
		if (t > z) {
			if (t*t == u * u + z * z) {
				cout << "right" << "\n";
			}
			else {
				cout << "wrong" << "\n";
			}
		}
		else if (x == 0 && y == 0 && z == 0) {
			break;
		}
		else {
			if (z*z == x * x + y * y) {
				cout << "right" << "\n";
			}
			else {
				cout << "wrong" << "\n";
			}
		}
	}
}