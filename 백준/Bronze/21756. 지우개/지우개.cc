#include <iostream>
using namespace std;
int arr[101] = { 0, 1, };
int axr[6] = { 2,4,8,16,32,64 };

int main() {
	int num = 0, count = 0, number = 0;
	cin >> num;
	for (int i = 2; i <= num; i++) {
		if (number == axr[count]) {
			count++;
			number = 0;
		}
		arr[i] = axr[count];
		number++;
	}
	cout << arr[num];
}