#include <iostream>
using namespace std;
int main() {
	int num = 0, number = 0, count = 0, count_2 = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		if (number == 0) {
			count++;
		}
		else {
			count_2++;
		}
	}
	if (count > count_2) {
		cout << "Junhee is not cute!";
	}
	else if (count<count_2) {
		cout << "Junhee is cute!";
	}
}