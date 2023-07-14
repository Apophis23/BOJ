#include <iostream>
using namespace std;

int main() {
	int num = 0, time = 0;
	int arr[10001] = { 0, };
	int result[2] = { 0, };
	for (int i = 2; i < 10001; i++) {
		arr[i] = i;
	}
	for (int i = 2; i < 10001; i++) {
		if (arr[i] == 0) {
			continue;
		}
		for (int j = i + i; j < 10001; j += i) {
			arr[j] = 0;
		}
	}
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> time;
		if (arr[time / 2] != 0){
			result[0] = arr[time / 2];
			result[1] = arr[time / 2];
			}
		else {
			for (int j = time/2; j >=2; j--) {
				if (arr[j] != 0 && arr[time - j] != 0) {
					result[0] = arr[j];
					result[1] = arr[time - j];
					break;
				}
			}
		}
		for (int k = 0; k < 2; k++) {
			cout << result[k] << " ";
		}
		cout << "\n";
	}
}