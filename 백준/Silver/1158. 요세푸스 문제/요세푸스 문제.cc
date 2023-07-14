#include <iostream>
#include <queue>
using namespace std;
int arr[5000] = { 0, };

int main() {
	int num = 0, number = 0, count = 0, front = 0, j = 0;
	cin >> num >> number;
	queue<int>que;
	for (int i = 1; i <= num; i++) {
		que.push(i);
	}
	for (int i = 0; que.empty() != true; i++) {
		count++;
		if (count == number) {
			front = que.front();
			que.pop();
			arr[j] = front;
			count = 0;
			j++;
		}
		else {
			front = que.front();
			que.pop();
			que.push(front);
		}
	}
	cout << "<";
	for (int i = 0; i < num; i++) {
		if (i == num - 1) {
			cout << arr[i] << ">";
		}
		else {
			cout << arr[i] << ", ";
		}
	}
}