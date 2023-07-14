#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int num = 0, mid = 0, count = 0;
	int arr[27] = { 0, };
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		mid = str[0] - 97;
		arr[mid]++;
	}
	for (int i = 0; i < 27; i++) {
		if (arr[i] >= 5) {
			cout << (char)(i + 97);
			count++;
		}
	}
	if (count == 0) {
		cout << "PREDAJA";
	}
}