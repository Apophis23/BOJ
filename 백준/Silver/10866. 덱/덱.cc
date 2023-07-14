#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	string str;
	deque<int>deq;
	int num = 0, number = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push_front") {
			cin >> number;
			deq.push_front(number);
		}
		else if (str == "push_back") {
			cin >> number;
			deq.push_back(number);
		}
		else if (str == "pop_front") {
			if (deq.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << deq.front() << "\n";
				deq.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (deq.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << deq.back() << "\n";
				deq.pop_back();
			}
		}
		else if (str == "size") {
			cout << deq.size() << "\n";
		}
		else if (str == "empty") {
			if (deq.empty() == true) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (str == "front") {
			if (deq.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << deq.front() << "\n";
			}
		}
		else if (str == "back") {
			if (deq.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << deq.back() << "\n";
			}
		}
	}
}