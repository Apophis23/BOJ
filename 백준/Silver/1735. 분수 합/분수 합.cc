#include <iostream>
using namespace std;

int min(int a, int b) {
	return a <= b ? a : b;
}

int main() {
	int a = 0, b = 0, c = 0, d = 0, son = 0, mother = 0, middle = 0;
	bool check = true;
	cin >> a >> b >> c >> d;
	mother = b * d;
	son = a * d + b * c;
	while (check!=false) {
		middle = min(mother, son);
		for (int i = middle; i >= 1; i--) {
			if (i == 1) {
				check = false;
				break;
			}
			if (mother%i == 0 && son%i == 0) {
				mother = mother / i;
				son = son / i;
				break;
			}
		}
	}
	cout << son << " " << mother;
}