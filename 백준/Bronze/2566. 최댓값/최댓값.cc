#include <iostream>
#include <string>
using namespace std;

int main() {
	int max = 0;
	int row=0, column=0;
	int arr[9][9];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				row = i;
				column = j;
			}
		}
	}
	cout << max << endl;
	cout << row + 1 << " " << column + 1;
}