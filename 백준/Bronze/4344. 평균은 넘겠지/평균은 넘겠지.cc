#include <iostream>
using namespace std;

int main() {
	int number, num, score, count, alt = 0;
	int store = 0;
	double fake = 0;
	int index[1000] = { '0' };
	double html[1000] = { '0' };
	double average = 0;

	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> num;
		store = 0;
		count = 0;
		for (int j = 0; j < num; j++) {
			cin >> score;
			index[j] = score;
			store += score;
		}

		average = store / (double)num;

		for (int p = 0; p < num; p++) {
			if (index[p] > average) {
				count++;
			}
		}

		cout << fixed;
		cout.precision(3);
		fake = count / (double)num * 100;
		html[alt] = fake;
		alt++;
	}

	for (int u = 0; u < number; u++) {
		cout << html[u] << "%" << endl;
	}
}