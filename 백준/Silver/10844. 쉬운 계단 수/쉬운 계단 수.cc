#include <iostream>
#define Mod 1000000000
using namespace std;
long long arr[101][10] = { 1,1, };

int main() {
	int num = 0;
	long long result = 0;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j < 10; j++) {
			if (i == 1) {
				arr[i][j] = 1;
			}
			else {
				if (j == 1) {
					arr[i][j] = arr[i - 1][j + 1] + arr[i - 2][j];
				}
				else if (j == 9) {
					arr[i][j] = arr[i - 1][j - 1];
				}
				else {
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
				}
				arr[i][j] %= Mod;
			}
			if (i == num) {
				result += arr[i][j];
			}
		}
	}
	cout << result % Mod;
}