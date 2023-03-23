#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[100] = { 0, };
	int num = 0, number = 0, rel = 0, count = 0;
	float abs = 0.0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	cin >> abs >> rel;
	abs = abs / 100 * num;
	cout << (int)abs << " ";
	for (int i = 0; i < num; i++) {
		if (arr[i] >= rel) {
			count++;
		}
	}
	cout << count;
}