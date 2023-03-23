#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0;
	int arr = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		arr+= (num * num);
	}
	cout << arr % 10;
}