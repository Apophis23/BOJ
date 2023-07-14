#include <iostream>
using namespace std;

int main() {
	int num = 0, casE = 0, floor = 0 ;
	int arr[15][15] = { 0, };
	for (int i = 0; i < 15; i++) {
		arr[0][i] = num;
		num++;
	}

	for (int k = 1; k < 15; k++) {
		for (int j = 0; j < 15; j++) {
			for (int h = 0; h <= j; h++) {
				arr[k][j] += arr[k - 1][h];
			}
		}
	}
	cin >> num;
	for (int m = 0; m < num; m++) {
		cin >> floor >> casE;
		cout << arr[floor][casE] << endl;
	}
}