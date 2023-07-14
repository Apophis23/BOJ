#include <iostream>
using namespace std;
int main(){
	int num = 0, number = 0, people = 0;
	int arr[5] = { 0, };
	cin >> num >> number;
	for (int i = 0; i < 5; i++) {
		cin >> people;
		arr[i] = people - (num*number);
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}