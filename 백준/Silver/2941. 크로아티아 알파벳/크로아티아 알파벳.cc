#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str[9] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string ste;
	int count = 0;
	int answer = 0;
	int n = 0;
	cin >> ste;
	for (int i = 0; i < 8; i++) {
		while (true) {
			n = ste.find(str[i]);
			if (n == string::npos) {
				break;
			}
			ste.replace(n, str[i].length(), "#");
		}
	}
	cout << ste.length();
}