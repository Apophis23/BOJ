#include <iostream>
using namespace std;
int arr[1000] = { 0, };
int ayr[1000] = { 0, };

int main() {
	int num = 0, number = 0, max = 0, mix = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	for (int i = 0; i < num; i++) {
		max = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (max < ayr[j]) {
					max = ayr[j];
				}
			}
		}
		ayr[i] = max + 1;
		if (ayr[i] > mix) {
			mix = ayr[i];
		}
	}
	cout << mix;
}