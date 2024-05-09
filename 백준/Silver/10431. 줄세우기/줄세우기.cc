#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, testcase, height, standard, locate;
	bool min;
	vector<int> vec;

	cin >> num;
	for (int i = 0; i < num; i++) {
		int answer = 0;
		cin >> testcase;
		cin >> height;
		vec.push_back(height);
		for (int j = 1; j < 20; j++) {
			min = false;
			cin >> height;
			for (int k = 0; k < vec.size(); k++) {
				if (height < vec[k]) {
					min = true;
					locate = k;
					break;
				}
			}
			if (min == false) {
				vec.push_back(height);
			}
			else {
				vec.insert(vec.begin() + locate, height);
				answer += vec.size() - locate - 1;
			}
		}
		cout << testcase << " " << answer << "\n";
		vec.clear();
	}
}