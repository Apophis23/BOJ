#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 0, count = 0, plus = 0, light = 0;
	cin >> a >> b;
	for (int i = b; i >= a; i--) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0) {
				count++; 
			}
		}
		if (count == 2) {
			plus += i;
			light = i;
		}
	}
	if (plus == 0) {
		cout << "-1" << endl;
	}
	else {
		cout << plus << endl << light;
	}
}