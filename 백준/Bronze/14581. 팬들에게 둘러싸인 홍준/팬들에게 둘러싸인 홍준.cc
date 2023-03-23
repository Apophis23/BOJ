#include <iostream>
#include <string>
using namespace std;

int main(){
	string str = ":fan:";
	string syr;
	cin >> syr;
	syr = ":" + syr + ":";
	for (int i = 1; i <= 9; i++) {
		if (i == 5) {
			cout << syr;
		}
		else {
			cout << str;
		}
		if (i % 3 == 0) {
			cout << "\n";
		}
	}
}