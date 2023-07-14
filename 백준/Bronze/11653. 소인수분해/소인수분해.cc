#include <iostream>
using namespace std;

int main() {
	int num = 0, mid = 0;
	cin >> num;
	if (num == 1) {
		return 0;
	}
	else {
		while (true) {
			for (int i = 2; i <= num; i++) {
				if (num%i == 0) {
					num /= i;
					mid = i;
					break;
				}
			}
			cout << mid << endl;
			if (num <= 1) {
				break;
			}
		}
	}
}