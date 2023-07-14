#include <iostream>
using namespace std;
int arr[1000000] = { 0, };
int main() {
	int num = 0, number = 0, count = 0, middle = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
		middle = 0;
		if (arr[i]==0) {
			for (int j = i - 1; middle < 1; j--) {
				if (arr[j] != 0) {
					arr[j] = 0;
					middle++;
				}
			}
		}
	}
	for (int i = 0; i < num; i++) {
		count += arr[i];
	}
	cout << count;
}