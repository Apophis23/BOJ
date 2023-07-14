#include <iostream>
using namespace std;

int main() {
	long long num = 0, n = 0, m = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n >> m;
		if (m / 2 < n) {
			n = m - n;
		}
		long long result = 1, value = 1;
		for (int i = n; i > 0; i--) {
			result *= i;
			value *= m;
			m--;
		}
		cout << value / result << "\n";
	}
}