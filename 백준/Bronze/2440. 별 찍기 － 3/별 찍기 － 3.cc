#include <iostream>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	for (int j = num; j > 0; j--) {
		for (int i = j; i > 0; i--) {
			cout << "*";
		}
		cout << "\n";
	}
}