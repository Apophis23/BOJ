#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c, d, e;
	int sum = 0;
	vector <int> vec = { 0 };
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> c;
		sum += c;
		vec.push_back(sum);
	}
	for (int i = 0; i < b; i++) {
		cin >> d >> e;
		cout << vec[e] - vec[d - 1] << "\n";
	}
}