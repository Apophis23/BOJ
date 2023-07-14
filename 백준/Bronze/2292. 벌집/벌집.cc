#include <iostream>
using namespace std;

int main() {
	int a = 0, count = 1, cite = 0, result = 0, i=0;
	cin >> a;
	if (a == 1) {
		cout << "1";
	}
	else {
		while (true) {
			cite = count;
			count += 6 * i;
			i++;
			if (a <= count && a > cite) {
				break;
			}
			result = i;

		}
		cout << result + 1;
	}
}