#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int>arr(1000000);
vector<int>ans(1000000);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num = 0, number = 0, result = -1, middle = 0, count = 0;
	stack<int>s;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> number;
		arr[i] = number;
	}
	for (int i = num - 1; i >= 0; i--) {
		result = -1;
		while (s.empty() == false && s.top() <= arr[i]) {
			s.pop();
		}
		if (s.empty() == true) {
			result = -1;
		}
		else {
			result = s.top();
		}
		s.push(arr[i]);
		ans[i] = result;
	}

	for (int i = 0; i < num; i++) {
		cout << ans[i] << " ";
	}
}