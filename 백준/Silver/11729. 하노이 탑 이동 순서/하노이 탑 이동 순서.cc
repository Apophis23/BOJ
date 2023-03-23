#include <iostream>
using namespace std;

void hanoi(int num, int start, int mid, int end) {
	if (num == 1) {
		cout << start << " " << end << "\n";
		return;
	}
	hanoi(num - 1, start, end, mid);
	cout << start << " " << end << "\n";
	hanoi(num - 1, mid, start, end);
}

int main() {
	int num = 0, result = 1;
	cin >> num;
	for (int i = 0; i < num; i++) {
		result *= 2;
	}
	cout << result - 1 << "\n";
	hanoi(num, 1, 2, 3);
}