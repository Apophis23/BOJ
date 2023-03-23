#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	double total = 0.00;
	double grade = 0.00;
	double t = 0.00;
	string str;
	string character;
	map <string, double> mp;
	mp.insert({ "A+", 4.5 });
	mp.insert({ "A0", 4.0 });
	mp.insert({ "B+", 3.5 });
	mp.insert({ "B0", 3.0 });
	mp.insert({ "C+", 2.5 });
	mp.insert({ "C0", 2.0 });
	mp.insert({ "D+", 1.5 });
	mp.insert({ "D0", 1.0 });
	mp.insert({ "F", 0.0 });

	for (int i = 0; i < 20; i++) {
		cin >> str >> grade >> character;
		if (character != "P") {
			double a = mp.find(character)->second;
			total += a * grade;
			t += grade;
		}
	}
	cout << (double)total / t;
}