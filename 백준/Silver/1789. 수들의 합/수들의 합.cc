#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long int result = 0;
	int i = 0;
	long long int m;
	cin >> m;
	while (result < m) {
		i++;
		result += i;
	}
	if (result == m) {
		cout << i;
	}
	else {
		cout << i - 1;
	}
}