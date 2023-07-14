#include <iostream>
using namespace std;
int arr[51] = { 0, };

void swap(int a, int b) {
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void heapify(int num) {
	for (int i = num - 1; i >= 0; i--) {
		swap(i, 0);
		int root = 0;
		int c = 0;
		do {
		    c = 2 * root + 1;
			if (c < i - 1 && arr[c] < arr[c + 1]) {
				c++;
			}
			if (c<i && arr[c]>arr[root]) {
				swap(c, root);
			}
			root = c;
		} while (i > c);
	}
}

void firstheap(int num) {
	for (int i = 1; i < num; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2;
			if (arr[root] < arr[c]) {
				swap(root, c);
			}
			c = root;
		} while (c > 0);
	}
	heapify(num);
}

int main() {
	int num = 0, number = 0, answer = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	firstheap(num);
	if (num % 2 == 1) {
		answer = arr[num / 2] * arr[num / 2];
	}
	else {
		answer = arr[num / 2] * arr[num / 2 - 1];
	}
	cout << answer;
}