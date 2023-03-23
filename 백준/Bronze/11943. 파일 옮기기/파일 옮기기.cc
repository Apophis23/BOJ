#include <iostream>
#include <string>
using namespace std;

int main() {
	int apple = 0, orange = 0, app = 0, ora = 0;
	cin >> apple >> orange >> app >> ora;
	if (apple + ora < orange + app) {
		cout << apple + ora;
	}
	else {
		cout << orange + app;
	}
}