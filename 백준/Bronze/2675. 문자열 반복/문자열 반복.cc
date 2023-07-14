#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string str;
	int a = 0, b = 0, c = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		cin >> str;
		for (int y = 0; y < str.length(); y++) {
			for (int k = 0; k < b; k++) {
				cout << str[y];
			}
		}
		cout << endl;
	}	
}