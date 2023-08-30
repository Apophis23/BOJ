#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a;
	stack<int> st;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b == 1) {
			cin >> c;
			st.push(c);
		}
		else if (b == 2) {
			if (st.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (b == 3) {
			cout << st.size() << "\n";
		}
		else if (b == 4) {
			if (st.empty() == true) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (b == 5) {
			if (st.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << st.top() << "\n";
			}
		}
	}
}