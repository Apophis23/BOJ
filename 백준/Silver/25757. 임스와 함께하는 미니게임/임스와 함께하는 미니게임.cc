#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	char c;
	int count = 1;
	string str;
	vector<string> vec;

	cin >> num >> c;
	for (int i = 0; i < num; i++) {
		cin >> str;
		vec.push_back(str);
	}
	sort(vec.begin(), vec.end());


	for (int i = 1; i < vec.size(); i++) {
		if (vec[i] != vec[i - 1]) {
			count++;
		}
	}

	if (c == 'Y') {
		cout << count << "\n";
	}
	else if (c == 'F') {
		cout << count / 2 << "\n";
	}
	else if (c == 'O') {
		cout << count / 3 << "\n";
	}
}