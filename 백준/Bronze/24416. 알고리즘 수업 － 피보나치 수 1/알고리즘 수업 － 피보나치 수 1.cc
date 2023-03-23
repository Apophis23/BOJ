#include <iostream>
#include <string>
using namespace std;
int num1 = 1;
int num2 = 1;
int arr[41] = { 0, 1, 1 };

int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		num1++;
		return (fib(n - 1) + fib(n - 2));
	}
}

int fibonacci(int n) {
	for (int i = 3; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		num2++;
	}
	return arr[n];
}

int main() {
	int a;
	cin >> a;
	fib(a);
	fibonacci(a);
	cout << num1 << " " << num2;
}