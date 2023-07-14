#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int earth = 0, moon = 0, sun = 0;
	int a, b, c;
	cin >> a >> b >> c;
	int count = 0;

	while (true) {
		earth++, moon++, sun++;
		if (earth > 15) {
			earth = 1;
		}
		if (sun > 28) {
			sun = 1;
		}
		if (moon > 19) {
			moon = 1;
		}
		count++;
		if (earth == a && sun == b && moon == c) {
			break;
		}
	}
	cout << count;
}