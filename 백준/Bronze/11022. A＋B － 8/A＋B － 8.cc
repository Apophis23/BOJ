#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base:: sync_with_stdio(false);
	int a;
	int b;
	int c;
	cin >> a;
	for (int i = 1; i < a + 1; i++) {
		cin >> b >> c;
		cout << "Case #" << i << ": " << b << " + " << c << " = " << b + c << "\n";
	}
}