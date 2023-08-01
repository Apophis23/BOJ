#include <iostream>
using namespace std;
int arr[101];

void swap(int a, int b) {
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int main() {
	int n, m, num1, num2;
	cin >> n >> m;
	for (int i = 0; i <= 100; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < m; i++) {
		cin >> num1 >> num2;
		swap(num1, num2);
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
}