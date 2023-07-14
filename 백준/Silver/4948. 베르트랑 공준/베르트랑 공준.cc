#include <iostream>
using namespace std;

int main() {
	int arr[246913] = { 0, };
	int num = 0, nim = 246913, result = 0;
	for (int i = 0; i < nim; i++) {
		arr[i] = i;
	}
	for (int i = 2; i < nim; i++) {
		if (arr[i] == 0) {
			continue;
		}
		for (int j = i + i; j < nim; j+=i) {
			arr[j] = 0;
		}

	}
	while (true) {
		cin >> num;
		if (num == 0) {
			break;
		}
		result = 0;
		for (int k = num + 1; k <= 2 * num; k++) {
			if (arr[k] != 0) {
				result++;
			}
		}
		cout << result << "\n";
	}
}