#include <iostream>
using namespace std;
long long km[1000] = { 0, };
long long oil[1000] = { 0, };

int main() {
	int number = 0, num = 0, count = 0;
	long long middle = 1000000001, answer = 0;
	cin >> number;
	for (int i = 0; i < number - 1; i++) {
		cin >> num;
		km[i] = num;
	}
	for (int i = 0; i < number; i++) {
		cin >> num;
		oil[i] = num;
	}
	for (int i = 0; i < number - 1; i++) {
		if (oil[i] < middle) {
			middle = oil[i];
		}
		answer += km[i] * middle;
	}
	cout << answer;
}