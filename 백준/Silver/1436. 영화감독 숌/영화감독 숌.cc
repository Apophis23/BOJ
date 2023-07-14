#include <iostream>
using namespace std;

int main() {
	int num = 0, rime = 666, middle = 0, kace = 0, count = 0, rice = 0;
	int arr[10001];
	int abr[100];
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = rime; ; j++) {
			count = 0;
			rice = j;
			middle = j;
			for (int k = 0; middle > 0; k++) {
				abr[k] = middle % 10;
				middle /= 10;
				kace = k;
			}
			for (int y = 0; y <= kace; y++) {
				if (abr[y] == 6) {
					count++;
					if (count == 3) {
						break;
					}
				}
				else {
					count = 0;
				}
			}
			rime += 1;
			if (count == 3) {
				arr[i] = rice;
				break;
			}
		}
	}
	cout << arr[num - 1];
}