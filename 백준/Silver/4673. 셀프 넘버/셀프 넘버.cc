#include <iostream>
using namespace std;

void selfish(int a) {
	int one, two, three, four, five, six, seven, eight = 0;
	bool check[10001] = { 0 };
	one = a;
	for (int i = 0; i < 10000; i++) {
		two = one / 1000;
		three = one % 1000;
		four = three / 100;
		five = three % 100;
		six = five / 10;
		seven = five % 10;
		eight = one + two + four + six + seven;
		check[eight] = true;
		one++;
	}

	for (int j = 1; j < 10000; j++) {
		if (check[j] == false) {
			cout << j << endl;
		}
	}
}

int main() {
	selfish(1);
}
