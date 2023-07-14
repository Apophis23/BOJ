#include <iostream>
using namespace std;
int fibonachi(int num){
	if (num==1||num == 2) {
		return 1;
	}
	else if (num == 0) {
		return 0;
	}
	else {
		return fibonachi(num - 1) + fibonachi(num - 2);
	}
}

int main() {
	int num;
	cin >> num;
	cout<<fibonachi(num);
}