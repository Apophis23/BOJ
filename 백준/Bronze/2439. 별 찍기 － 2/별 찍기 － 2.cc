#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base:: sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a - i; j++) {
			cout << " ";
		}
		for (int t = 0; t < i; t++) {
			cout << "*";
		}
		cout << "\n";
	}
}