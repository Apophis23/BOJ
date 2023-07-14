#include <iostream>
#include <string>
using namespace std;

int main() {
	int width = 0, length = 0, count = 0, w = 0, co = 0, result = 65, count_t = 0, least = 0;
	string abr = "BWBWBWBW";
	string awr = "WBWBWBWB";
	string ch;
	char arr[51][51] = { 0, };
	cin >> length >> width;
	for (int j = 0; j < length; j++) {
		cin >> ch;
		for (int i = 0; i < width; i++) {
			arr[j][i] = ch[i];
		}
	}
	for (int y = 0; y < length - 7; y++) {
		for (int i = 0; i < width - 7; i++) {
			co = 0;
			count = 0;
			count_t = 0;
			for (int n = y; n < y + 8; n++) {
				for (int j = i; j < i + 8; j++) {
					if (co % 2 == 0) {
						if (arr[n][j] != abr[w]) {
							count++;
						}
						else if (arr[n][j] != awr[w]) {
							count_t++;
						}
					}
					else if(co%2==1) {
						if (arr[n][j] != awr[w]) {
							count++;
						}
						else if (arr[n][j] != abr[w]) {
							count_t++;
						}
					}
					w++;
				}
				w = 0;
				co += 1;
			}
			least = count > count_t ? count_t : count;
			if (least < result) {
				result = least;
			}
		}
		
	}
	cout << result;
}