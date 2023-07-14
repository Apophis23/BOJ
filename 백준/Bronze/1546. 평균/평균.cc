#include <iostream>
using namespace std;

int main() {
	int number, narrow, nam = 0;
	int	nike = 0;
	int array[1000];
	double ko = 0;
	double nav = 0;
	double arr[1000];
	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> narrow;
		array[i] = narrow;
		if (array[i] >= array[nike]) {
			nam = array[i];
			nike = i;
		}
	}

	for (int k = 0; k < number; k++) {
		cout << fixed;
		arr[k] = array[k] / (double)nam * 100;
	}

	for (int y = 0; y < number; y++) {
		ko += arr[y];
	}
	nav = (double)ko / number;
	cout << nav;
}