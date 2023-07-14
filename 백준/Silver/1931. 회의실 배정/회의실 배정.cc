#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> meeting;

bool compare(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main() {
	int num = 0, number = 0, nu = 0, count = 0, middle = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number >> nu;
		meeting.push_back({ number, nu });
	}
	sort(meeting.begin(), meeting.end(), compare);
	for (int i = 0; i < num; i++) {
		if (middle <= meeting[i].first) {
			middle = meeting[i].second;
			count++;
		}
	}
	cout << count;
}