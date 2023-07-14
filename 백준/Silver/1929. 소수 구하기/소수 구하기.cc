#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long num = 0, nim = 0, count = 0, mid = 0;
	cin >> num >> nim;
	for (int i = num; i <= nim; i++) {
		mid = sqrt(i);
		for (int j = 2; j <= mid; j++) {
			if (i%j == 0) {
				count++;
			}
		}
		if (count == 0&&i!=1) {
			cout << i << "\n";
		}
		count = 0;
	}
}