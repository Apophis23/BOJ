#include <iostream>
#include <string>
using namespace std;

int main() {
	int in = 0, out = 0, max = 0, person = 0;
	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		person = person + in - out;
		if (person > max) {
			max = person;
		}
	}
	cout << max;
}