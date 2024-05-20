#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
vector<int> vec;

void swap(int a, int b) {
	int temp = vec[a];
	vec[b] = vec[a];
	vec[a] = temp;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num, order;
	int student = 1;
	cin >> num;
	cin >> order;
	vec.push_back(student);
	student += 1;

	for (int i = 0; i < num-1; i++) {
		cin >> order;
		vec.insert(vec.begin()+(student - order-1),student);
		student++;
	}
	for (int i = 0; i < num; i++) {
		cout << vec[i] << " ";
	}
}
