#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c, d;
	int result = 0;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		cin >> c >> d;
		result += c * d;
	}
	if (result == a) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}