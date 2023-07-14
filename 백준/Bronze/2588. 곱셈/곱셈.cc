#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a;
	int b;
	cin >> a >> b;
	int c = b / 100;
	int d = (b % 100) / 10;
	int e = (b % 10) / 1;
	cout << a * e << endl;
	cout << a * d << endl;
	cout << a * c << endl;
	cout << a * b << endl;
}