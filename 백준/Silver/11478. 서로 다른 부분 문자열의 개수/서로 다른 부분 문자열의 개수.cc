#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
unordered_set<string> set;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		string syr = "";
		for (int j = i; j < str.size(); j++) {
			syr += str[j];
			set.insert(syr);
		}
	}
	cout << set.size();
}