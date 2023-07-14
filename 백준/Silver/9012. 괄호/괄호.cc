#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int num = 0, check = 0;
	cin >> num;
	string str;
	stack <int> a;
	for (int j = 0; j < num; j++) {
		cin >> str;
		check = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				a.push('(');
			}
			else if (str[i] == ')') {
				if (a.empty() == true) {
					cout << "NO"<<"\n";
					check = 1;
					break;
				}
				else {
					a.pop();
				}
			}
		}
		if (a.empty() == false) {
			cout << "NO"<<"\n";
			while (a.empty() != true) {
				a.pop();
			}
		}
		else if (a.empty() == true && check != 1) {
			cout << "YES"<<"\n";
		}
	}
}