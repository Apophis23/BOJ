#include <iostream>
#include <vector>
using namespace std;
vector <pair<int, int>> a(1000000);

void swap(int x, int y) {
	int temp = a[x].second;
	a[x].second = a[y].second;
	a[y].second = temp;
	temp = a[x].first;
	a[x].first = a[y].first;
	a[y].first = temp;
}

void heapify(int num) {
	for (int i = num - 1; i >= 0; i--) {
		swap(0, i);
		int root = 0;
		int c = 1;
		do {
			c = 2 * root + 1;
			if (c < i - 1 && (a[c].second < a[c + 1].second||(a[c].second==a[c+1].second&&a[c].first<a[c+1].first))) {
				c++;
			}
			if (c<i&&(a[root].second < a[c].second||(a[c].second==a[root].second&&a[c].first>a[root].first))) {
				swap(root, c);
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
			if (a[root].second < a[c].second) {
				swap(root, c);
			}
			else if (a[root].second == a[c].second&&a[root].first<a[c].first) {
				swap(root, c);
			}
			c = root;
		} while (c>0);
	}
	heapify(num);
}

int main() {
	int num = 0, x = 0, y = 0;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		a[i].first = x;
		a[i].second = y;
	}
	firstheap(num);
	for (int i = 0; i < num; i++) {
		cout << a[i].first << " " << a[i].second << "\n";
	}
}