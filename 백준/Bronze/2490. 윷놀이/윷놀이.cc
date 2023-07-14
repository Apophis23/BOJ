#include <iostream>
#include <string>
using namespace std;
int main() {
	int num = 0, count=0;
	for (int i = 0; i < 3; i++) {
		count = 0;
		for (int j = 0; j < 4; j++) {
			cin >> num;
			if (num == 0) {
				count++;
			}
		}
		if (count == 1) {
			cout << "A";
		}
		else if (count == 2){
			cout << "B";
		}
		else if (count == 3) {
			cout << "C";
		}
		else if (count == 4) {
			cout << "D";
		}
		else if (count == 0) {
			cout << "E";
		}
		cout << "\n";
	}
}