#include <iostream>
#include <array>
using namespace std;

int main() {

	int a;
	int b;
	int count = 1;
	int count1 = 8;
	int arr[8];

	for (int i = 0; i < 8; i++) {
		cin >> a;
		arr[i] = a;
	}

	for (int j = 0; j < 8; j++) {
		if (arr[j] == count) {
			count++;
		}
		else if (arr[j] == count1) {
			count1--;
		}
	}

	if (count-1 == 8) {
		cout << "ascending" << endl;
	}

	else if (count1 == 1) {
		cout << "descending" << endl;
	}

	else {
		cout << "mixed" << endl;
	}

}