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

	int num, button, testcase, gender,state;
	cin >> num;
	vec.push_back(-1);
	for (int i = 0; i < num; i++) {
		cin >> button;
		vec.push_back(button);
	}
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> gender>>state;
		if (gender == 1) {
			int count = 1;
			while (state*count <= num) {
				if (vec[state*count] == 1) {
					vec[state*count] = 0;
				}
				else {
					vec[state*count] = 1;
				}
				count++;
			}
		}
		else if (gender == 2) {
			int count = 0;
			while (true) {
				if (state - count <= 0 || state + count > num||vec[state-count]!=vec[state+count]) {
					break;
				}
				else {
					if (vec[state-count] == 1) {
						vec[state - count] = 0;
						vec[state + count] = 0;
					}
					else {
						vec[state - count] = 1;
						vec[state + count] = 1;
					}
				}
				count++;
			}
		}
	}
	for (int i = 1; i <= num; i++) {
		cout << vec[i] << " ";
		if (i % 20 == 0) {
			cout << "\n";
		}
	}
}