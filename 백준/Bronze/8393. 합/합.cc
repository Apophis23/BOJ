#include <iostream>
using namespace std;
int main() {
	int a;
	int b = 0;
	cin >> a;
	for (int i = 1; i < a + 1; i++) {
		b += i;
	}
	cout << b << endl;
}