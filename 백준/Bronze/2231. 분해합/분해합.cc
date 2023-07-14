#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0, count = 0, result = 0;
	cin >> a;
	for (int j = 1; j <= a; j++) {
		result = 0;
		b = j;
		for (int k = 0; b > 0; k++) {
			c = b % 10;
			b /= 10;
			result += c;
		}
		if (result + j == a) {
			cout << j;
			break;
		}
		else if (j == a) {
			cout << count;
		}
	}
}