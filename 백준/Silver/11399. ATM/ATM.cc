#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000] = { 0, };

int main() {
	int number = 0, result = 0, num = 0, answer = 0;
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> num;
		arr[i] = num;
	}
	sort(arr, arr + number);
	for (int i = 0; i < number; i++) {
		result += arr[i];
		answer += result;
	}
	cout << answer;
}