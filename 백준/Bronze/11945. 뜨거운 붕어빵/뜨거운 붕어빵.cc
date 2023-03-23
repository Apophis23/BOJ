#include <iostream>
#include <string>
using namespace std;
int main() {
	int num = 0, number = 0;
	string syr;
	string str[10];
	cin >> num >> number;
	for (int i = 0; i < num; i++) {
		cin >> syr;
		str[i] = syr;
	}
	for (int i = 0; i < num; i++) {
		for (int j = number - 1; j >= 0; j--) {
			cout << (str[i])[j];
		}
		cout << "\n";
	}
}
