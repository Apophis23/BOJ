#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


bool mom(char a) {
	bool retvalue = false;
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
		retvalue = true;
	}
	return retvalue;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;

	while (true) {
		cin >> str;
		if (str == "end") {
			break;
		}

		int continuosmom = 0, continuosson = 0, same = 1;
		bool last = false, essential = false;

		for (int i = 0; i < str.length(); i++) {
			bool result = mom(str[i]);
			if (result == true) {
				continuosmom++;
				continuosson = 0;
				essential = true;
			}
			else {
				continuosson++;
				continuosmom = 0;
			}
			if (i != 0 && str[i] == str[i - 1]) {
				same++;
			}
			else {
				same = 1;
			}
			if (continuosmom == 3 || continuosson == 3) {
				last = true;
				break;
			}
			if (same >= 2) {
				if (same == 2 && (str[i] == 'e' && str[i - 1] == 'e') || (str[i] == 'o' && str[i - 1] == 'o')) {
					continue;
				}
				else {
					last = true;
					break;
				}
			}
		}

		if (last == false && essential==true) {
			cout << "<" << str << ">" << " is acceptable." << "\n";
		}
		else {
			cout << "<" << str << ">" << " is not acceptable." << "\n";
		}
	}
}