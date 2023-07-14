#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x = 0, y = 0, r = 0, xt = 0, yt = 0, rt = 0, num = 0, xo = 0, yo = 0, t = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> x >> y >> r >> xt >> yt >> rt;
		xo = xt - x;
		yo = yt - y;
		t = xo * xo + yo * yo;
		double d = sqrt(t);
		double sting = rt > r ? rt - r : r - rt;
	
		if (d == 0 && r == rt) {
			cout << -1 << "\n";
		}
		else if (d > sting&&d < (r + rt)) {
			cout << 2 << "\n";
		}

		else if (r + rt == d || sting == d) {
			cout << 1 << "\n";
		}
		else if (sting > d || d > (r + rt)) {
			cout << 0 << "\n";
		}
	}
}