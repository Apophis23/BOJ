#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
map<string, int> book
;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	string str;
	int count = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> str;
		book[str]++;
		count = max(count, book[str]);
	}
	auto iter = book.begin();
	while (iter != book.end()) {
		if (iter->second == count) {
			cout << iter->first;
			return 0;
		}
		iter++;
	}
}