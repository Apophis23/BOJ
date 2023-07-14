#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int pro = 1000;
	int count = 10;
	int index[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		cin >> a;
		index[i] = a % 42;
	}

	for (int j = 0; j < 10; j++) {
		for (int k = j+1; k < 10; k++) {
			if (index[j] == index[k]) {
				count--;
				index[k] = pro;
				pro++;
			}
		}
	}
	cout << count;
}
