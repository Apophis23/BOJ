#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack <char> a;
	string str;
	while (true) {
		getline(cin, str);
		bool check = false;
		if (str == ".") {
			break;
		}
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				a.push(str[i]);
			}
			else if (a.empty() == true && (str[i] == ')' || str[i] == ']')) {
				a.push(1);
				break;
			}
			if (a.empty() == false && str[i] == ')'&& a.top() == '(') {
				a.pop();
			}
			else if(a.empty() == false&& str[i]==')'&&a.top()=='[') {
				a.push(1);
				break;
			}
		    if (a.empty() == false && str[i] == ']' && a.top() == '[') {
				a.pop();
			}
			else if(a.empty() == false && str[i]==']'&&a.top()=='('){
				a.push(1);
				break;
			}
		}
		if (a.empty() == true) {
			cout << "yes" << "\n";
		}
		else if (a.empty() == false) {
			while (a.empty() != true) {
				a.pop();
			}
			cout << "no" << "\n";
		}
	}
}