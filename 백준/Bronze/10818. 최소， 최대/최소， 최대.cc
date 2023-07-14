#include <iostream>
using namespace std;

int main() {

	int a, b, c, d;
	int arr[1000000];
	int i = 0;

	cin >> a;

	for (i = 1; i < a; i++) {
		arr[i];
	}

	for (int j = 0; j < i; j++) {
		cin >> b;
		arr[j] = b;
	}

	c = arr[0];
	d = arr[0];

	for (int k = 1; k < i; k++) {

		if(arr[k]>c){
			c = arr[k];
		}

		else if (arr[k] < d) {
			d = arr[k];
		}
	}
	cout << d << " " << c;
}