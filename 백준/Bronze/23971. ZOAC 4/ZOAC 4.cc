#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h, w, n, m;
	cin >> h >> w >> n >> m;

	n = n + 1;
	m = m + 1;
	
	int a = 1, b = 1, counth = 0, countw = 0;
	
	while (a <= h) {
		a = a + n;
		counth++;
	}
	while (b <= w) {
		b = b + m;
		countw++;
	}
	cout << counth * countw;
}