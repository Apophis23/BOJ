#include <iostream>
#include <string>
using namespace std;

int main() {
	int hour, minute, time, c;
	cin >> hour >> minute >> time;
	minute += time;
	if (minute >= 60) {
		c = minute / 60;
		hour += c;
		minute -= 60 * c;
		if (hour >= 24) {
			hour -= 24;
		}
	}
	cout << hour << " " << minute;
}