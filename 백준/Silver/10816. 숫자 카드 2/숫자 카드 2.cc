#include <iostream>
#include <algorithm>
using namespace std;
int num = 0;
int arr[500000] = { 0, };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num_t = 0, number;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	sort(arr, arr + num);
	cin >> num_t;
	for (int i = 0; i < num_t; i++) {
		cin >> number;
		cout << upper_bound(arr,arr+num, number) - lower_bound(arr, arr+num, number) << " ";
	}
}