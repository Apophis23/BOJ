#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int num = 0, number = 0, question = 0, important = 0, con = 0, result = 0, store = 0;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> num;
	for (int i = 0; i < num; i++) {
		queue<int>que;
		result = 0;
		con = 0;
		cin >> number >> question; 
		vector<int>arr(number);
		int count = question;
		bool check = false;
		for (int j = 0; j < number; j++) {
			cin >> important;
			arr[j] = important;
			que.push(important);
		}
		sort(arr.begin(), arr.end(), greater<>());
		for (int k = 0; check != true; k++) {
			if (count!=0 && arr[con] == que.front()) {
				que.pop();
				con++;
				count--;
				result++;
			}
			else if (count == 0 && arr[con] == que.front()) {
				que.pop();
				result++;
				check = true;
				break;
			}
			else if (count != 0 && arr[con] != que.front()) {
				store = que.front();
				que.pop();
				que.push(store);
				count--;
			}
			else if (count == 0 && arr[con] != que.front()) {
				store = que.front();
				que.pop();
				que.push(store);
				count = que.size() - 1;
			}
		}
		cout << result << "\n";
	}
}