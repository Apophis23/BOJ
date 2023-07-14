#include <iostream>
using namespace std;
int arr[4] = {0,  1, };

void swap(int a, int b) {
	arr[0] = arr[a];
	arr[a] = arr[b];
	arr[b] = arr[0];
}

int main() {
	int a, b, c;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b >> c;
		swap(b, c);
	}
	for (int i = 1; i < 4; i++) {
		if (arr[i] == 1) {
			cout << i;
		}
	}
}