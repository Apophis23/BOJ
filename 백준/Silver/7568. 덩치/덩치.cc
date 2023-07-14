#include <iostream>
using namespace std;
int main() {
	int a = 0, b = 0, c = 0;
	int weight[51] = { 0, };
	int height[51] = { 0, };
	int grade[51] = { 0, };
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b >> c;
		height[i] = b;
		weight[i] = c;
		grade[i] = a;
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (i == j) {
				continue;
			}
			else if (height[i] < height[j] && weight[i] < weight[j]) {}
			else {
				grade[i] -= 1;
			}
		}
		cout << grade[i] << " ";
	}
}