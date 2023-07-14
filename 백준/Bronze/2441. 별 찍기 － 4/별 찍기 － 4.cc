#include <iostream>
using namespace std;
int main() {
	int a, i, j;
	cin >> a;
	for (i = a; i >= 0; i--)
	{
		for (j = 0; j < a - i; j++)
			cout << " ";
		for (j = 1; j <= i; j++)
			cout << "*";
		cout << "\n";
	}
}