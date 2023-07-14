#include <iostream>
using namespace std;
bool issued1[14] = { 0, };
bool issued2[27] = { 0, };
bool issued3[27] = { 0, };
int num = 0, cnt = 0, rel = 0;

void func(int k) {
	if (k == num) {
		cnt++;
		return;
	}
	for (int i = 0; i < num; i++) {
		if (issued1[i] == true || issued2[k + i] == true || issued3[k-i+num-1] == true) {
			continue;
		}
		issued1[i] = true;
		issued2[k + i] = true;
		issued3[k-i+num-1] = true;
		func(k + 1);
		issued1[i] = false;
		issued2[k + i] = false;
		issued3[k-i+num-1] = false;
	}
}

int main() {
	cin >> num;
	func(0);
	cout << cnt;
}