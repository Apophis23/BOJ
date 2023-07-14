#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001] = { 0, };

int main() {
	int num = 0, number = 0, count = 1, max = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	sort(arr, arr + num);
	for (int i = num-1; i >= 0; i--) {
		if (arr[i] * count > max) {
			max = arr[i] * count;
		}
		count++;
	}
	cout << max;
}