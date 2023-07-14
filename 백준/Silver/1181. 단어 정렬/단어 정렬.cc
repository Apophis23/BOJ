#include <iostream>
#include <string>
using namespace std;
string arr[20000];

void swap(int a, int b) {
	string temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void heapify(int num) {
	for (int i = num - 1; i >= 0; i--) {
		swap(i, 0);
		int c = 1;
		int root = 0;
		do {
			c = 2 * root + 1;
			if (c < i - 1 && arr[c].length() < arr[c + 1].length()) {
				c++;
			}
			else if (c < i - 1 && arr[c].length() == arr[c + 1].length() && arr[c] < arr[c + 1]) {
				c++;
			}
			if (c<i&&arr[c].length()>arr[root].length()) {
				swap(c, root);
			}
			else if (c<i&&arr[c].length() == arr[root].length()&&arr[c]>arr[root]) {
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
			if (arr[c].length() > arr[root].length()) {
				swap(c, root);
			}
			else if (arr[c].length() == arr[root].length() && arr[c] > arr[root]) {
				swap(c, root);
			}
			c = root;
		} while (c > 0);
	}
	heapify(num);
}

int main(){
	int num = 0;
	string str;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		arr[i] = str;
	}
	firstheap(num);
	for (int i = 0; i < num; i++) {
		if (arr[i] == arr[i - 1]) {
			continue;
		}
		cout << arr[i] << "\n";
	}
}