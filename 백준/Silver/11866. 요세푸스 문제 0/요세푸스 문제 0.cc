#include <iostream>
#include <queue>
using namespace std;
int arr[1000] = { 0, };

int main() {
	int num = 0, number = 0, store = 0;
	queue<int>que;
	cin >> num >> number;

	for (int i = 1; i <= num; i++) {
		que.push(i);
	}
	for (int j = 0; j < num; j++) {
		for (int i = 0; i < number - 1; i++) {
			store = que.front();
			que.pop();
			que.push(store);
		}
		store = que.front();
		que.pop();
		arr[j] = store;
	}
	
	for (int i = 0; i < num; i++) {
		if (i == 0) {
			cout << "<";
		}
		cout << arr[i];
		if (i != num - 1) {
			cout << ", ";
		}
		else {
			cout << ">";
		}
	}
}