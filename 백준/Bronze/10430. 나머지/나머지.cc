#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	cout << (a + b) % c << endl;
	cout << (a%c + b % c) % c << endl;
	cout << (a*b) % c << endl;
	cout << (a%c*b%c) % c << endl;
}