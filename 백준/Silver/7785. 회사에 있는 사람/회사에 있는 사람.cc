#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <string>
#include <map>
using namespace std;
map <string, string, greater<>> person_list;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string name, record;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> name >> record;
		if (record == "enter") {
			person_list.insert({ name, record });
		}
		else {
			auto iter = person_list.find(name);
			person_list.erase(iter);
		}
	}
	map <string, string>::iterator it;
	for (it = person_list.begin(); it != person_list.end(); it++) {
		cout << it->first << "\n";
	}
}
