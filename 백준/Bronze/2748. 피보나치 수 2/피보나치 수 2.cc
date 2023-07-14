#include <iostream>
#include <string>
using namespace std;

int main() {
	long long num = 0;
	long long arr[90] = { 0, };
	cin >> num;
	for (int i = 0; i <= 1; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= num; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[num];
}