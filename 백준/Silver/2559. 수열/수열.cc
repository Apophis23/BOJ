#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c, d, e;
	int sum = 0;
	int max = -100000;
	vector <int> vec = { 0 };
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> c;
		sum += c;
		vec.push_back(sum);
	}
	int j = 0;
	for (int i = b; i <= a; i++) {
		int result = vec[i] - vec[j];
		if (result > max) {
			max = result;
		}
		j++;
	}
	cout << max;
}