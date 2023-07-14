#include <iostream>
using namespace std;
long long arr[12] = { 0, 1, 2, 4, 0, };

int main() {
	int num = 0, number = 0;
	cin >> num;
	for (int i = 4; i < 12; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	for (int i = 0; i < num; i++) {
		cin >> number;
		cout << arr[number] << "\n";
	}
}