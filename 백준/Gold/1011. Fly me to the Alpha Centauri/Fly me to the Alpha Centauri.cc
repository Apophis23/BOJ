#include<iostream>
using namespace std;

void Result() {
	long num = 0, x = 0, y = 0, result = 0, ref = 0, cite=0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		cite = y - x;
		ref = 0;
		result = 0;
		for (int j = 1; ref < cite; j++) {
			for (int k = 0; k < 2; k++) {
				ref += j;
				result++;
				if (ref >= cite) {
					break;
				}
			}
		}
		cout << result << endl;
	}
}
int main() {
	Result();
}