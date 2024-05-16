#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
stack<int> stk;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		int a;
		if (str == "push") {
			cin >> a;
			stk.push(a);
		}
		else if (str == "pop") {
			if (stk.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << stk.top() << "\n";
				stk.pop();
			}
		}
		else if (str == "size") {
			cout << stk.size() << "\n";
		}
		else if (str == "empty") {
			cout << stk.empty() << "\n";
		}
		else if (str == "top") {
			if (stk.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << stk.top() << "\n";
			}
		}
	}
}
