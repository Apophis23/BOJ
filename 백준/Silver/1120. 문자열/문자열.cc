#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str1, str2;
	cin >> str1 >> str2;
	int ans = str2.size();
	for (int i = 0; i <= str2.size()-str1.size(); i++) {
		int cnt = 0;
		for (int j = 0; j < str1.size(); j++) {
			if (str1[j] != str2[j + i]) {
				cnt++;
			}
		}
		ans = min(ans, cnt);
	}
	cout << ans << '\n';
}