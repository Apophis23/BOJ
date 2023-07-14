#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> vec;
vector <int> bec;

int main() {
	int num = 0, number = 0, result = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		vec.push_back(number);
	}
	for (int i = 0; i < num; i++) {
		cin >> number;
		bec.push_back(number);
	}
	sort(vec.begin(), vec.end());
	sort(bec.begin(), bec.end(), greater<>());
	for (int i = 0; i < num; i++) {
		result += vec[i] * bec[i];
	}
	cout << result;
}