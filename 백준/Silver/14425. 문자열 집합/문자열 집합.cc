#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
unordered_set<string> st;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	int count = 0;
	string str, syr;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> str;
		st.insert(str);
	}
	for (int i = 0; i < b; i++) {
		cin >> syr;
		if (st.find(syr) != st.end()) {
			count++;
		}
	}
	cout << count;
}