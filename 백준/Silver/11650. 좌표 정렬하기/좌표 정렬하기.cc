#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int num = 0, x = 0, y = 0;
	cin >> num;
	vector <pair<int, int>> a(num);
	for (int i = 0; i < num; i++) {
		cin >> a[i].first >> a[i].second;	
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < num; i++) {
		cout << a[i].first << " " << a[i].second<<"\n";
	}
}