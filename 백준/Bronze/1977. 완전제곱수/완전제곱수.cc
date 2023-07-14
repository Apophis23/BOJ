#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b;
	int count = 0;
	int small = 10001;
	cin >> a >> b;
	for (int i = 1; i <= 100; i++) {
		if (i * i >= a && i * i <= b) {
			count += (i * i);
			if (i * i < small) {
				small = i * i;
			}
		}
	}
	if (count == 0) {
		cout << -1;
	}
	else {
		cout << count << "\n";
		cout << small;
	}
}