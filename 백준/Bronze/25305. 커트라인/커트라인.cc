#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	vector<int> vec;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> c;
		vec.push_back(c);
	}
	sort(vec.begin(), vec.end(), greater<>());
	cout << vec[b - 1];
}