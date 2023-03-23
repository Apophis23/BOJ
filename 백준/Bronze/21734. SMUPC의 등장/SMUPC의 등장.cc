#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0, middle = 0;
	int arr[10] = { 0, };
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		count = 0;
		middle = (int)str[i];
		for (int j = 0; j < 3; j++) {
			count += middle % 10;
			middle /= 10;
			if (middle == 0) {
				break;
			}
		}
		for (int k = 0; k < count; k++) {
			cout << str[i];
		}
		cout << "\n";
	}
}