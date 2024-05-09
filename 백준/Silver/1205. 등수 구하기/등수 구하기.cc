#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<int> vec;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int now, score, num;
	int count = 1;
	cin >> now >> score >> num;
	if (now != 0) {
		for (int i = 0; i < now; i++) {
			int a;
			cin >> a;
			vec.push_back(a);
		}
		if (now == num && vec[num-1]>=score) {
			cout << -1;
		}
		else {
			for (int i = 0; i < vec.size(); i++) {
				if (vec[i] > score) {
					count++;
				}
				else if (vec[i] == score) {
					count = count;
				}
				else {
					break;
				}
			}
			cout << count;
		}
	}
	else {
		cout << 1;
	}
}