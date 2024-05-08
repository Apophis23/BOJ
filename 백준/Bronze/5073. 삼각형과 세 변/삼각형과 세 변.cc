#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	vector<int> v(1001, 0);
	vector<int> input;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		input.push_back(a);
		input.push_back(b);
		input.push_back(c);

		sort(input.begin(), input.end());
		if (input[2] >= input[0] + input[1]) {
			cout << "Invalid" << "\n";
		}
		else {
			v[a]++;
			v[b]++;
			v[c]++;

			if (v[a] == 3 || v[b] == 3 || v[c] == 3) {
				cout << "Equilateral" << "\n";
			}
			else if (v[a] == 2 || v[b] == 2 || v[c] == 2) {
				cout << "Isosceles" << "\n";
			}
			else {
				cout << "Scalene" << "\n";
			}
		}
		input.clear();
		fill(v.begin(), v.end(), 0);
	}
}