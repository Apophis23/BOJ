#include <iostream>
using namespace std;
int main() {
	int num = 0, number = 0;
	cin >> num >> number;
	if (number == 1 || number == 2) {
		cout << "NEWBIE!";
	}
	else if (num >= number) {
		cout << "OLDBIE!";
	}
	else {
		cout<<"TLE!";
	}
}