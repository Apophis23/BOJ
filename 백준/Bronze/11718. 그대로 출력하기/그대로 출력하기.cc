#include <iostream>
#include <string>
using namespace std;
int main(){
	string str, syr;
	while (true) {
		getline(cin, str);
		if (str == "") {
			break;
		}
		cout << str<<"\n";
	}
}