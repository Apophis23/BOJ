#include<iostream>
using namespace std;
int main() {
	int a = 0, b = 0, c = 0, count = 0, time = 0, res = 0;
	int arr[101] = { 0, };
	int result[200000] = { 0, };
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> c;
		arr[i] = c;
	}
	for (int j = 0; j < a - 2; j++) {
		for (int k = j + 1; k < a - 1; k++) {
			for (int n = k + 1; n < a; n++) {
				result[count] = arr[j] + arr[k] + arr[n];
				count++;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		if (result[i]>b) {
			continue;
		}
		else if(result[i]==b) {
			res = result[i];
			break;
		}
		else {
			if (result[i] > res) {
				res = result[i];
			}
		}
	}
	cout << res;
}