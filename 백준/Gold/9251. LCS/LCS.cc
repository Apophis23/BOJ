#include <iostream>
#include <string>
#define Max 1001
using namespace std;

int arr[Max][Max] = { 0, };

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	string str, syr;
	cin >> str >> syr;
	for (int i = 1; i <= syr.length(); i++) {
		for (int j = 1; j <= str.length(); j++) {
			if (syr[i-1] == str[j-1]) {
				arr[i][j] = arr[i - 1][j - 1] + 1;
			}
			else {
				arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
			}
		}
	}
	cout << arr[syr.length()][str.length()];
}