#include <iostream>
using namespace std;
int arr[1002] = { 0, };
int main() {
	int num = 0;
	cin >> num;
	arr[1] = 1;
	arr[2] = 2;
	if (num >= 3) {
		for (int i = 3; i <= num; i++) {
			arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
		}
	}
	cout << arr[num] % 10007;
}