#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
unordered_set<int> set;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a = 0, b = 0, count = 0;
	int num1, num2;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> num1;
		set.insert(num1);
	}
	for (int i = 0; i < b; i++) {
		cin >> num1;
		if (set.find(num1) != set.end()) {
			count++;
		}
	}
	cout << (a + b) - (count * 2);
}