#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int num = 0, number = 0, drink = 0, max = 0, middle = 0;
	string str;
	vector < pair<string, int>> a(100);
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		for (int j = 0; j < number; j++) {
			cin >> str >> drink;
			a[j].first = str;
			a[j].second = drink;
			if (a[j].second > max) {
				max = a[j].second;
				middle = j;
			}
		}
		cout << a[middle].first << "\n";
	}
}