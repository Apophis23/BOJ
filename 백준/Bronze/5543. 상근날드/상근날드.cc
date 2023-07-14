#include <iostream>
using namespace std;

int main() {
	int arr[6] = { 0, };
	int a = 0, b = 0, c = 0, d = 0, e = 0, min=9999;
	cin >> a >> b >> c >> d >> e;
	arr[0] = a + d - 50;
	arr[1] = a + e - 50;
	arr[2] = b + d - 50;
	arr[3] = b + e - 50;
	arr[4] = c + d - 50;
	arr[5] = c + e - 50;
	for (int i = 0; i < 6; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << min;
}
