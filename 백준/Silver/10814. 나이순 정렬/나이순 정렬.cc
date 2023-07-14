#include <iostream>
#include <string>
using namespace std;
int ag[1000000] = { 0, };
string name[1000000];
int ace[1000000] = { 0, };
string nime[1000000];

void mergesort(int *data, string *name, int start, int middle, int end) {
	int i = start, j = middle + 1, k = start;
	while (i <= middle && j <= end) {
		if (ag[j] >= ag[i]) {
			ace[k] = ag[i];
			nime[k] = name[i];
			i++;
		}
		else {
			ace[k] = ag[j];
			nime[k] = name[j];
			j++;
		}
		k++;
	}
	if (j > end) {
		for (int t = i; t <= middle; t++) {
			ace[k] = ag[t];
			nime[k] = name[t];
			k++;
		}
	}
	else {
		for (int t = j; t <= end; t++) {
			ace[k] = ag[t];
			nime[k] = name[t];
			k++;
		}
	}
	for (int t = start; t <= end; t++) {
		ag[t] = ace[t];
		name[t] = nime[t];
	}
}

void merge(int *data, string *name, int start, int end) {
	if (start < end) {
		int middle = (start + end) / 2;
		merge(ag, name, start, middle);
		merge(ag, name, middle + 1, end);
		mergesort(ag, name, start, middle, end);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num = 0,  age = 0;
	string str;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> age >> str;
		ag[i] = age;
		name[i] = str;
	}
	merge(ag, name, 0, num - 1);
	for (int i = 0; i < num; i++) {
		cout << ag[i] << " " << name[i] << '\n';
	}
}