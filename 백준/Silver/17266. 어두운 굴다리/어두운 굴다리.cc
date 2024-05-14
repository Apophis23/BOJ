#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vec.push_back(0);

	int length, num, position, temp;
	int result = 0;

	cin >> length >> num;
	for (int i = 0; i < num; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	vec.push_back(length);

	for (int i = 1; i < vec.size(); i++) {
		if (i == 1 || i == vec.size() - 1) {
			temp = vec[i] - vec[i - 1];
		}
		else {
			if ((vec[i] - vec[i - 1]) % 2 == 1) {
				temp = (vec[i] - vec[i - 1]) / 2 + 1;
			}
			else {
				temp = (vec[i] - vec[i - 1]) / 2;
			}
		}
		result = max(temp, result);
	}
	cout << result;
}