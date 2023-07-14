#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0;
	int arr[46] = { 0, };
	cin >> num;
	for (int i = 0; i <= 1; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= num; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[num];
}