#include <iostream>
using namespace std;
long long arr[81]{ 0, 1, };

int main() {
	int num = 0;
	cin >> num;
	if (num >= 1) {
		for (int i = 2; i <= num+1; i++) {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
	}
	cout << (arr[num] + arr[num+1])*2;
}