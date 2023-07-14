#include <iostream>
#include <cmath>
using namespace std;

int arr[8000] = { 0, };

int main() {
	int num = 0, number = 0, max = -4000, min = 4000, k = 0, center = 0, count = 0, lots = 0, bead = 0, average = 0;
	double sum = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> number;
		if (number < 0) {
			arr[number + 8001]++;
		}
		else {
			arr[number]++;
		}
	}

	for (int i = 0; i <= 8000; i++) {
		if (arr[i] > lots) {
			lots = arr[i];
		}
	}

	for (int i = 4001; i <= 8001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				sum += (i - 8001);
				if (k <= num / 2) {
					center = i - 8001;
					k++;
				}
			}
			if (lots <= arr[i] && count < 2) {
				lots = arr[i];
				bead = i - 8001;
				count++;
			}
			if (max < i - 8001) {
				max = i - 8001;
			}
			if (min > i - 8001) {
				min = i - 8001;
			}
		}
	}

	for (int i = 0; i <= 4000; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				sum += i;
				if (k <= num / 2) {
					center = i;
					k++;
				}
			}
			if (lots <= arr[i] && count < 2) {
				lots = arr[i];
				bead = i;
				count++;
			}
			if (max < i) {
				max = i;
			}
			if (min > i) {
				min = i;
			}
		}
	}
	sum = sum / num;
	average = round(sum);
	cout << average << "\n" << center << "\n" << bead << "\n" << max - min;
}