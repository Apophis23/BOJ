#include <iostream>
using namespace std;

int main() {
	int a, b, value;
	int arr1[100][100];
	int arr2[100][100];
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> value;
			arr1[i][j] = value;
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> value;
			arr2[i][j] = arr1[i][j] + value;
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
}