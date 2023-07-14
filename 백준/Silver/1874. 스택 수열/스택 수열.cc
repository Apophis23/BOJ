#include <iostream>
#include <stack>
using namespace std;
char arr[1000000] = { '0' };
int main() {
	int num = 0, number = 0, mid = 1, count = 0;
	bool check = true;
	stack<int> s;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		if (s.empty()!=true && s.top() > number) {
			check = false;
			break;
		}
		if (mid <= number) {
			for (int i = mid; i <= number; i++) {
				s.push(i);
				arr[count] = '+';
				count++;
			}
			s.pop();
			arr[count] = '-';
			count++;
			mid = number + 1;
		}
		else {
			s.pop();
			arr[count] = '-';
			count++;
		}
	}
	if (check == true) {
		for (int i = 0; arr[i] != 0; i++) {
			cout << arr[i] << "\n";
		}
	}
	else {
		cout << "NO";
	}
}