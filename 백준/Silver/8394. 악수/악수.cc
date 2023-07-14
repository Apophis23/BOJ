#include <iostream>
using namespace std;
long long  arr[10000000] = { 0,1,2, };

int main() {
	long long num;
	cin >> num;
	if (num <= 2) {
		cout << arr[num] % 10;
	}
	else {
		for (int i = 3; i <= num; i++) {
			arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
		}
		cout << arr[num] % 10;
	}
}