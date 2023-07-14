#include <iostream>
using namespace std;

int find_zero(int num) {
	int number = num;
	int count = 0;
	while (number != 0) {
		if (number % 10 == 0) {
			count++;
		}
		number /= 10;
	}
	return count;
}

int main() {
	int num = 0, n = 0, m = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n >> m;
		int count = 0;
		if (n == 0) {
			count += 1;
		}
		for (int j = n; j <= m; j++) {
			count += find_zero(j);
		}
		cout << count << "\n";
	}
}