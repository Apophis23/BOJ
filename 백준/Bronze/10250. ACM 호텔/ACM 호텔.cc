#include <iostream>
using namespace std;

int main() {
	int hotel[100][100];
	int height = 0, weight = 0, test = 0, guest = 0, count = 0, plus = 0;
	cin >> test;
	for (int k = 0; k < test; k++) {
		cin >> height >> weight >> guest;
		count = 0;
		for (int i = 1; i <= weight; i++) {
			for (int j = 1; j <= height; j++) {
				hotel[j][i] = j * 100 + i;
				plus = hotel[j][i];
				count++;
				if (count == guest) {
					cout << hotel[j][i] << endl;
					break;
				}
			}
			if (count == guest) {
				break;
			}
		}
	}
}