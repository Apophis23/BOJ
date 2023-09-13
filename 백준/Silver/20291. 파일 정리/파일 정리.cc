#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, int> m;
	int num;
	string str;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		int location = str.find('.');
		str.erase(str.begin(), str.begin() + location+1);
		auto item = m.find(str);
		if (item == m.end()) {
			m.insert({ str, 1 });
		}
		else {
			item->second += 1;
		}
	}
	for (auto i = m.begin(); i != m.end(); i++) {
		cout << i->first << " " << i->second << '\n';
	}
}