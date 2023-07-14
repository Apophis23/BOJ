#include <iostream>
#include <string>
using namespace std;
int arr[9] = { 0, };

int main() {
	int count = 0;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '9') {
			arr[6]++;
		}
		else {
			arr[(int)str[i] - 48]++;
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i == 6) {
			arr[i] = (arr[i] + 1) / 2;
		}
		if (arr[i] > count) {
			count = arr[i];
		}
	}
	cout << count;
}