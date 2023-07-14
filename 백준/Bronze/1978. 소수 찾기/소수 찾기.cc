#include<iostream>
using namespace std;

int main() {
	int put = 0, prime = 0, count = 0, middle = 0;
	cin >> put;
	for (int i = 0; i < put; i++) {
		cin >> prime;
		middle = 0;
		for (int j = 1; j <= prime; j++) {
			if (prime%j == 0) {
				middle++;
			}
		}
		if (middle == 2) {
			count++;
		}
	}
	cout << count;
}