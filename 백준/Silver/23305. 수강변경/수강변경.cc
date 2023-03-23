#include <iostream>
using namespace std;
int arr[1000000] = { 0, };

int main() {
	int num = 0, number = 0, max = 0, result = 0;
	cin >> num;
	for (int i = 0; i < num * 2; i++) {
		cin >> number;
		if (i < num) {
			arr[number]++;
		}
		else {
			if (arr[number] > 0) {
				arr[number]--;
			}
			else {
				result++;
			}
		}
	}
	cout << result;
}
