#include <iostream>
using namespace std;
int arr[1001][10001] = { 1, };

int main() {
	int num = 0, number = 0;
	cin >> num >> number;
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == j) {
				arr[i][j] = 1;
				continue;
			}
			arr[i][j] = (arr[i - 1][j] + arr[i - 1][j - 1]) % 10007;
		}
	}
	cout << arr[num][number];
}