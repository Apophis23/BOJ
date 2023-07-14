#include <string>
#include <iostream>
using namespace std;

int main() {
	string str;
	while (true) {
		getline(cin,str);
		int i = 0;
		int count = 0;
		if (str[i] == '#') {
			break;
		}
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U') {
				count++;
			}
		}
		cout << count << "\n";
	}
}