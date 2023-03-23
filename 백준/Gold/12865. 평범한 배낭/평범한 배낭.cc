#include <iostream>
#include <vector>
using namespace std;
int arr[101][100001] = { 0, };

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int num = 0, value = 0, va = 0, weight = 0, count = 0;
	vector <pair<int, int>> product;
	cin >> num >> value;
	for (int i = 0; i < num; i++) {
		cin >> weight >> va;
		product.push_back({ weight, va });
	}
	for (int i = 1; i <= num; i++) {
		int a = product[count].first;
		int b = product[count].second;
		for (int j = 1; j <= value; j++) {
			if (j < a) {
				arr[i][j] = arr[i - 1][j];
			}
			else {
				arr[i][j] = max(arr[i - 1][j - a] + b, arr[i - 1][j]);
			}
		}
		count++;
	}
	cout << arr[num][value];
}