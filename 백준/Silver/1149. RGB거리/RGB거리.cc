#include <iostream>
using namespace std;
long long house[1000][3] = { 0, };
long long answer[1000][3] = { 0, };

long long min(long long a, long long b) {
	return a >= b ? b : a;
}

int main() {
	int num = 0, number = 0, micro = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> number;
			house[i][j] = number;
			if (i == 0) {
				answer[i][j] = number;
			}
		}
		if (i > 0) {
			answer[i][0] = min(answer[i - 1][1], answer[i - 1][2]) + house[i][0];
			answer[i][1] = min(answer[i - 1][0], answer[i - 1][2]) + house[i][1];
			answer[i][2] = min(answer[i - 1][0], answer[i - 1][1]) + house[i][2];
		}
	}
	micro = min(answer[num - 1][0], answer[num - 1][1]);
	micro = min(micro, answer[num - 1][2]);
	cout << micro;
}