#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0, ytn = 0, mite = 0, nim = 0;
	string str, syr;
	int arr[10001] = { 0, };
	int ayr[10001] = { 0, };
	int asy[10001] = { 0, };
	cin >> str >> syr;
	if (str.length() >= syr.length()) {
		for (unsigned int i = 0; i < str.length() - syr.length(); i++) {
			ayr[i] = 0;
		}
		num = str.length() - syr.length();
		ytn = str.length() - 1;
		for (unsigned int i = 0; i < str.length(); i++) {
			arr[i] = str[i]-48;
			if (i < syr.length()) {
				ayr[num] = syr[i] - 48;
				num++;
			}
		}
	}

	else if (str.length() < syr.length()) {
		for (unsigned int i = 0; i < syr.length() - str.length(); i++) {
			arr[i] = 0;
		}
		num = syr.length() - str.length();
		ytn = syr.length() - 1;
		for (unsigned int i = 0; i < syr.length(); i++) {
			ayr[i] = syr[i]-48;
			if (i < str.length()) {
				arr[num] = str[i] - 48;
				num++;
			}
		}
	}
	for (int k = ytn; k > 0; k--) {
		mite = arr[k] + ayr[k];
		nim = mite + asy[k];
		if (nim > 9) {
			asy[k - 1] += (nim / 10);
		}
		asy[k] = (nim % 10);
	}
	mite = arr[0] + ayr[0];
	asy[0] += mite;

	for (int i = 0; i <= ytn; i++) {
		cout << asy[i];
	}
}