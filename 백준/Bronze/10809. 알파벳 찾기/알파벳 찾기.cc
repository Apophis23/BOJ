#include <iostream>
#include <string>
int main() {
	std::string str;
	char arr[101];
	char alp[26];
	int art[26];
	char a = 'a';
	for (int i = 0; i < 26; i++) {
		alp[i] = a;
		art[i] = -1;
		a++;
	}
	std::cin >> str;
	for (int j = 0; j < 26; j++) {
		for (int k = 0; k < str.length(); k++) {
			if (alp[j] == str.at(k) && art[j] == -1) {
				art[j] = k;
			}
		}
	}
	for (int y = 0; y < 26; y++) {
		std::cout << art[y] << " ";
	}
}