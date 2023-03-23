#include <iostream>
using namespace std;
long long arr[120] = { 0,1,1,1, };

int main() {
	int num;
	cin >> num;
	if (num < 4) {
		cout << arr[num];
	}
	else {
		for (int i = 4; i <= num; i++) {
			arr[i] = arr[i - 1] + arr[i - 3];
		}
		cout << arr[num];
	}
}