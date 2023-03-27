#include <iostream>
using namespace std;

int main() {
	int a = 0, c = 0;
	char b = '0';
	int arr[101] = { 0 };
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		arr[i] = b;
	}
	for (int j = 0; j < a; j++) {
		c += arr[j]-48;
	}
	cout << c;
}