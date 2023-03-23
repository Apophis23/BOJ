#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string arr[5];
	int ary[5];
	int num = 0, number = 0, min = 99, count = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		arr[i] = str;
		cin >> number;
		ary[i] = number;
	}
	for (int i = 0; i < num; i++) {
		if (ary[i]<min) {
			count = i;
			min = ary[i];
		}
	}
	cout << arr[count];
}