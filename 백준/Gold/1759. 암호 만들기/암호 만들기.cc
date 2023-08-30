#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int a, b;
char c;

vector<char> res;
vector<char> str;

bool checking() {
	int m = 0;
	for (int i = 0; i < a; i++) {
		if (res[i] == 'a' || res[i] == 'e' || res[i] == 'i' || res[i] == 'o' || res[i] == 'u') {
			m++;
		}
	}
	if (m >= 1 && a - m >= 2) {
		return true;
	}
	else {
		return false;
	}
}

void dfs(int x) {
	if (res.size() == a) {
		if (checking()) {
			for (int i = 0; i < a; i++) {
				cout << res[i];
			}
			cout << "\n";
			return;
		}
	}
	for (int i = x; i < b; i++) {
		res.push_back(str[i]);
		dfs(i + 1);
		res.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b;

	for (int i = 0; i < b; i++) {
		cin >> c;
		str.push_back(c);
	}
	sort(str.begin(), str.end());
	dfs(0);
}