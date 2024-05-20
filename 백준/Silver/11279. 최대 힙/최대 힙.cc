#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
priority_queue<int> min_heap;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num, task;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> task;
		if (task == 0) {
			if (min_heap.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << min_heap.top() << "\n";
				min_heap.pop();
			}
		}
		else {
			min_heap.push(task);
		}
	}
}
