#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> arr;
vector <int> ayr;
vector <int> atr;

void mergesort(vector <int> vec, int start, int middle, int end) {
	int i = start, j = middle + 1, k = start;
	while (i <= middle && j <= end) {
		if (arr[i] >= arr[j]) {
			ayr[k] = arr[j];
			j++;
		}
		else {
			ayr[k] = arr[i];
				i++;
		}
		k++;
	}
	if (i > middle) {
		for (int t = j; t <= end; t++) {
			ayr[k] = arr[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= middle; t++) {
			ayr[k] = arr[t];
			k++;
		}
	}
	for (int t = start; t <= end; t++) {
		arr[t] = ayr[t];
	}
}

void merge(vector <int> vec, int start, int end) {
	if (start < end) {
		int middle = (start + end) / 2;
		merge(arr, start, middle);
		merge(arr, middle + 1, end);
		mergesort(arr, start, middle, end);
	}
	else {
		return;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num = 0, number = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr.push_back(number);
		atr.push_back(number);
	}
	//merge(arr, 0, num - 1);
	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int i=0; i<num; i++){
		cout << lower_bound(arr.begin(), arr.end(), atr[i])-arr.begin() << " ";
	}
}