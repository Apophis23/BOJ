#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int>gold(1001, 0);
	vector<int>silver(1001, 0);
	vector<int>bronze(1001, 0);

	int country, guess, gold_num, silver_num, bronze_num, num;
	int ranking = 0;
	cin >> country >> guess;

	for (int i = 0; i < country; i++) {
		cin >> num >> gold_num >> silver_num >> bronze_num;
		gold[num] = gold_num;
		silver[num] = silver_num;
		bronze[num] = bronze_num;
	}
	for (int i = 1; i < country; i++) {
		if (gold[i] > gold[guess]) {
			ranking++;
		}
		else if (gold[i] == gold[guess]) {
			if (silver[i] > silver[guess]) {
				ranking++;
			}
			else if (silver[i] == silver[guess]) {
				if (bronze[i] > bronze[guess]) {
					ranking++;
				}
			}
		}
	}
	cout << ranking + 1;
}