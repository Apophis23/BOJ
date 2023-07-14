#include <iostream>
#include <deque>
#include <string>
using namespace std;
char arr[100000];

int main() {
	int num = 0, su = 0, store = 0;
	string order, number;
	deque<int> deq;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int count = 0;
		cin >> order >> su >> number;
		for (int j = 1; j < number.length(); j++) {
			if (number[j] != ',' && number[j] != ']') {
				count++;
			}
			else if (number[j] == ',' || number[j] == ']') {
				if (count == 3) {
					deq.push_back(((int)number[j - 3] - 48) * 100 + ((int)number[j - 2] - 48) * 10 + (int)number[j - 1] - 48);
				}
				if (count == 2) {
					deq.push_back(((int)number[j - 2] - 48) * 10 + (int)number[j - 1] - 48);
				}
				if (count == 1) {
					deq.push_back((int)number[j - 1] - 48);
				}
				count = 0;
			}
		}
		int Case = 0;
		bool check = false;
		for (int k = 0; k < order.length(); k++) {
			if (deq.empty() == true && order[k] == 'D') {
				check = true;
				cout << "error" << "\n";
				break;
			}
			if (order[k] == 'R'){
				Case++;
			}
			if (Case % 2 == 0 && order[k] == 'D') {
				deq.pop_front();
			}
			else if (Case % 2 == 1 && order[k] == 'D') {
				deq.pop_back();
			}
		}
		store = deq.size();
		if (check != true) {
			cout << '[';
			for (int y = 0; y < store; y++) {
				if (Case % 2 == 0) {
					cout << deq.front();
					deq.pop_front();
				}
				else {
					cout << deq.back();
					deq.pop_back();
				}
				if (y != store - 1) {
					cout << ',';
				}
			}
			cout << ']' << "\n";
		}
	}
}