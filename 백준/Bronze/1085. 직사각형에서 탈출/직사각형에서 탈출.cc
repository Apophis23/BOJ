#include <iostream>
using namespace std;

int main() {
	int w = 0, h = 0, x = 0, y = 0, len = 0, hei = 0;
	cin >> x >> y >> w >> h;
	if (h - y > y) {
		hei = y;
	}
	else {
		hei = h - y;
	}
	if (w - x > x) {
		len = x;
	}
	else {
		len = w - x;
	}
	if (hei >= len) {
		cout << len;
	}
	else if (hei <= len) {
		cout << hei;
	}
}