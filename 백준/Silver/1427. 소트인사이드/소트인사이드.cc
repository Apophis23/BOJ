#include <iostream>
using namespace std;
int arr[10] = { 0, };
int main() {
	int num = 0, devide = 0;
	cin >> num;
	for (int i = 0; num / 10 > 0; i++) {
		devide = num % 10;
		num /= 10;
		arr[devide]++;
	}
	arr[num]++;
	for (int j = 9; j>=0; j--) {
		if (arr[j] != 0) {
			for (int i = 0; i < arr[j]; i++) {
				cout << j;
			}
		}
	}
}