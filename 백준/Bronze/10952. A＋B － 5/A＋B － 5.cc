#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base:: sync_with_stdio(false);
	int a;
	int b;
	
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		else {
			cout << a + b << endl;
		}
	}
}