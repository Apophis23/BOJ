#include <iostream>
using namespace std;

int main() {
	int number[10] = { 0 };
	int first, second, third, sum, ace = 0;
	cin >> first >> second >> third;
	sum = first * second * third;

	for (int i = 0; sum > 0; i++) {
		ace = sum % 10;
		sum /= 10;
		number[ace]++;
	}

	for (int j = 0; j < 10; j++) {
		cout << number[j] << endl;
	}

}