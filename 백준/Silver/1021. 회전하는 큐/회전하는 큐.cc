#include <iostream>
#include <deque>
using namespace std;

int main() {
	int num = 0, number = 0, index = 0, store = 0, min = 0, result = 0;
	deque<int>deq;
	cin >> num >> number;
	for (int i = 1; i <= num; i++) {
		deq.push_back(i);
	}
	for (int i = 0; i < number; i++) {
		cin >> index;
		int count = 0;
		min = 0;
		for (int j = 0; ; j++) {
			if (index == deq.front()) break;
			store = deq.front();
			deq.pop_front();
			deq.push_back(store);
			count++;
		}

		min = count;

		for (int j = 0; j < count; j++) {
			store = deq.back();
			deq.pop_back();
			deq.push_front(store);
		}

		count = 0;

		for (int j = 0; ; j++) {
			if (index == deq.front()) break;
			store = deq.back();
			deq.pop_back();
			deq.push_front(store);
			count++;
		}

		if (min > count) {
			min = count;
		}
		result += min;
		deq.pop_front();
	}
	cout << result;
}