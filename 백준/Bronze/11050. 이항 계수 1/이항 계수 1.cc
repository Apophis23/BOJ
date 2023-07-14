#include <iostream>
using namespace std;

int factorial(int n) {
	int ans = 1;
	for (int i = n; i > 1; i--) {
		ans *= i;
	}
	return ans;
}

int main() {
	int n = 0, k = 0, nk = 0;
	cin >> n >> k;
	nk = n - k;
	cout << factorial(n) / (factorial(k)*factorial(nk));
}