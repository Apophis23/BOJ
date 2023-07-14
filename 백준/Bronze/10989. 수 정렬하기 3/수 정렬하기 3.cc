#include <iostream>
using namespace std;;
int arr[10000] = { 0, };

int main() {
	int num = 0, number = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &number);
		arr[number - 1]++;
	}
	for (int i = 0; i < 10000; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				printf("%d\n", i + 1);
			}
		}
	}
}