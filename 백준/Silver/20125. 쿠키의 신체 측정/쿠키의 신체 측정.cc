#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
char arr[1001][1001];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cin >> arr[i][j];
		}
	}
	bool check = false;
	int hearti = 0, heartj = 0, lefthand = 0, righthand = 0, leftfoot = 0, rightfoot = 0, middle = 0, middlei = 0, middlej = 0;
	for (int i = 1; i < num; i++) {
		for (int j = 1; j < num; j++) {
			if (arr[i - 1][j] == '*' && arr[i][j - 1] == '*' && arr[i][j + 1] == '*' && arr[i + 1][j] == '*') {
				cout << i + 1 << " " << j + 1 << "\n";
				hearti = i;
				heartj = j;
				check = true;
				break;
			}
		}
		if (check == true) {
			break;
		}
	}
	for (int j = heartj - 1; j >= 0; j--) {
		if (arr[hearti][j] == '_') {
			break;
		}
		else {
			lefthand++;
		}
	}
	for (int j = heartj + 1; j < num; j++) {
		if (arr[hearti][j] == '_') {
			break;
		}
		else {
			righthand++;
		}
	}
	for (int i = hearti + 1; i < num; i++) {
		if (arr[i][heartj] == '_') {
			middlei = i;
			break;
		}
		else {
			middle++;
		}
	}
	for (int i = middlei; i < num; i++) {
		if (arr[i][heartj - 1] == '_') {
			break;
		}
		else {
			leftfoot++;
		}
	}
	for (int i = middlei; i < num; i++) {
		if (arr[i][heartj + 1] == '_') {
			break;
		}
		else {
			rightfoot++;
		}
	}
	cout << lefthand << " " << righthand << " " << middle << " " << leftfoot << " " << rightfoot;
}