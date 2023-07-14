#include <iostream>
using namespace std;
int main() {
	int count = -1, num = 0, a = 0;
	cin >> num;
	if (num == 3) {
		count = 1;
	}
	else {
		for (int i = 0; ; i++) {
			for (int j = 0; ; j++) {
				a = 5 * i + 3 * j;
				if (num == a) {
					count = i + j;
				}
				else if (a >= num) {
					break;
				}
			}
			if (i * 5 >= num) {
				break;
			}
		}
	}
	cout << count;
}