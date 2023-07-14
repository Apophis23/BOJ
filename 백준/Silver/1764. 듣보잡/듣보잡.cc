#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string arr[500000];
string axr[500000];
int num = 0, number = 0;

int binarysearch(string a) {
	int st = 0;
	int en = num - 1;
	while (en >= st) {
		int mid = (st + en) / 2;
		if (arr[mid] > a) {
			en = mid - 1;
		}
		else if (arr[mid] < a) {
			st = mid + 1;
		}
		else {
			return 1;
		}
	}
	return 0;
}

int main() {
	string str;
	int count = 0;
	cin >> num >> number;
	for (int i = 0; i < num; i++) {
		cin >> str;
		arr[i] = str;
	}
	sort(arr, arr + num);
	for (int i = 0; i < number; i++) {
		cin >> str;
		if (binarysearch(str) == 1) {
			axr[count] = str;
			count++;
		}
	}
	sort(axr, axr + count);
	cout << count << "\n";
	for (int i = 0; i < count; i++) {
		cout << axr[i] << "\n";
	}
}