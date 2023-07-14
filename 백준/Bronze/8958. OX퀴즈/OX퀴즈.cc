#include <iostream>
#include <string>
using namespace std;

int main() {
	int number = 0;
	string question;
	cin >> number;
	int arr[1000];

	for (int i = 0; i < number; i++) {
		cin >> question;
		int count = 0;
		int cnt = 0;
		for (int k = 0; k < question.length(); k++) {
			if (question[k] == 'O') {
				count++;
				cnt += count;
			}
			else if (question[k] == 'X') {
				count = 0;
			}
		}
		arr[i] = cnt;
	}

	for (int y = 0; y < number; y++) {
		cout << arr[y] << endl;
	}

}
