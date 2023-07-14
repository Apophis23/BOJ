#include <iostream>
#include <queue>
using namespace std;

int main() {
	int num = 0, store = 0;
	queue<int>que;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		que.push(i);
	}

	for (int i = 1; que.size() != 1; i++) {
		if (i % 2 == 1) {
			que.pop();
		}
		else {
			store = que.front();
			que.pop();
			que.push(store);
		}
	}
	cout << que.front();
}