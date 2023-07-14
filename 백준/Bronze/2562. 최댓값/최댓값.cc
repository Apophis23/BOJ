#include <iostream>
#include <array>
using namespace std;

int main() {

	int a;
	int b;
	int count = 1;
	int arr[9];

	for (int i = 0; i < 9; i++) {
		cin >> a;
		arr[i] = a;
	}

	b = arr[0];

	for (int j = 1; j < 9; j++) {
		if (b > arr[j]) {
			b = b;
		}
		else if (b < arr[j]) {
			b = arr[j];
			count = j+1;
		}
	}
	cout << b << endl << count;
}