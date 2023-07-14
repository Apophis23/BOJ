#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[101] = { 0, };
vector <pair<int, int>>line;

int main() {
	int num = 0, number = 0, nim = 0, max = 1;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number >> nim;
		line.push_back(make_pair(number, nim));
		arr[i] = 1;
	}
	sort(line.begin(), line.end());
	for (int i = 1; i < num; i++) {
		int min = 0;
		for (int j = 0; j < i; j++) {
			if (line[i].second > line[j].second) {
				if (arr[j] > min) {
					min = arr[j];
				}
			}
		}
		arr[i] = min + 1;
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << num - max;
}