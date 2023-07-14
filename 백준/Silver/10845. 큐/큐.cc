#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<int>que;
	string str;
	int num = 0, number = 0;
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> str;

		if (str == "push") {
			cin >> num;
			que.push(num);
		}

		else if (str == "pop") {
			if (que.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << que.front() << "\n";
				que.pop();
			}
		}

		else if (str == "size") {
			cout << que.size() << "\n";
		}

		else if (str == "empty") {
			if (que.empty() == true) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}

		else if (str == "front") {
			if (que.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << que.front() << "\n";
			}
		}

		else if (str == "back") {
			if (que.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << que.back() << "\n";
			}
		}
	}
}