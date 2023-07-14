#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string syr;
	string ss;
	int j = 0, count = 0;
	getline(cin, str);
	getline(cin, syr);
	for (int i = 0; str.find(syr)!=string::npos; i++) {
		int first = str.find(syr);
		count++;
		str = str.substr(first + syr.length(), str.length());
	}
	cout << count;
}