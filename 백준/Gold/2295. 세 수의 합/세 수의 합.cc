#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long arr[1005] = { 0, };
vector <long long> vec;

int binarysearch(int a, long long b) {
	int st = 0;
	int en = a - 1;
	while (en >= st) {
		int mid = (st + en) / 2;
		if (vec[mid] > b) {
			en = mid - 1;
		}
		else if (vec[mid] < b) {
			st = mid + 1;
		}
		else {
			return 1;
		}
	}
	return 0;
}

int main() {
	int num = 0, number = 0, max = 0, check = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	for (int i = 0; i < num; i++) {
		for (int j = i; j < num; j++) {
			vec.push_back(arr[i] + arr[j]);
		}
	}
	sort(vec.begin(), vec.end());
	for (int i = num - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			check = binarysearch(vec.size(), arr[i] - arr[j]);
			if (check == 1 && arr[i] > max) {
				max = arr[i];
			}
		}
	}
	cout << max;
}