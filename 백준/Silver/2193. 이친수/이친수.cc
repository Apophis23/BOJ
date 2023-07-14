#include <iostream>
using namespace std;
long long arr[90] = { 0, };

int main() {
	arr[1] = 1;
	arr[2] = 1;
	int num = 0;
	cin >> num;
	if (num >= 3) {
		for (int i = 3; i <= num; i++) {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
	}
	cout << arr[num];
}