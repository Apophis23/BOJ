#include <iostream>
#include <string>
using namespace std;
int arr[50] = { 0, };

int main() {
	string str, num;
	int result = 0;
	bool check = false;
	cin >> str;
	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == '-' || str[i] == '+'||i==str.length()) {
			if (check == true) {
				result -= stoi(num);
				num = "";
			}
			else {
				result += stoi(num);
				num = "";
			}
		}
		else {
			num += str[i];
		}
		if (str[i] == '-') {
			check = true;
		}
	}
	cout << result;
}