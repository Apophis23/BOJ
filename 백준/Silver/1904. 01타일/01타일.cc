#include <iostream>
using namespace std;
long long arr[1000000] = { 0, 1, 2, 0, };

int main() {
	long long num;
	cin >> num;
	if (num <= 2) {
		cout << arr[num];
	}
	else {
		for (int i = 3; i <= num; i++) {
			arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
		}
		cout << arr[num];
	}
}