#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[5];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		arr[i] = num;
		avg += num;
	}
	sort(arr, arr + 5);
	cout << avg / 5 << "\n" << arr[2];
}