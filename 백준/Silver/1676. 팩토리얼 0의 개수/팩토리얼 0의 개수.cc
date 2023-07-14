#include <iostream>
using namespace std;

int main() {
	int num = 0, count = 0;
	cin >> num;
	if (num == 0) {
		cout << 0;
	}
	else {
		for (int i = 1; i <= num; i++) {
			if (i % 5 == 0) {
				count++;
			}
			if (i % 25 == 0) {
				count++;
			}
			if (i % 125==0) {
				count++;
			}
		}
		cout << count;
	}
}