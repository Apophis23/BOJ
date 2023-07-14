#include <iostream>
using namespace std;

void Quicksort(int* data, int start, int end) {
	if (start >= end) {
		return;
	}
	int key = start, temp = 0, i = 0, j = 0;
	while (i <= j) {
		for (i = start + 1; data[i] < data[key]; i++) {}
		for (j = end; data[j] > data[key]; j--) {}
		if (i >= j) {
			temp = data[key];
			data[key] = data[j];
			data[j] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	Quicksort(data, start, j - 1);
	Quicksort(data, j + 1, end);
}

int main() {
	int num = 0, number = 0;
	int arr[1001];
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	Quicksort(arr, 0, num - 1);
	for (int i = 0; i < num; i++) {
		cout << arr[i] << "\n";
	}
}