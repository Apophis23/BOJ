#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<string, int> m;
string arr[100001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	string name, search;
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> name;
		m.insert({ name, i });
		arr[i] = name;
	}
	for (int i = 0; i < b; i++) {
		cin >> search;
		if (m.find(search) != m.end()) {
			cout << m.find(search)->second << "\n";
		}
		else {
			int num = stoi(search);
			cout << arr[num] << "\n";
		}
	}
}