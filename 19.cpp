#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//Time Conversion from 12 hours to 24 hours

void print24(string str) {

	// Get hours
	int h1 = (int)str[1] - '0';
	int h2 = (int)str[0] - '0';
	int hh = (h2 * 10 + h1 % 10);

	// Check if PM 07:23:24PM
	if (str[8] == 'A') {
		if (hh == 12) {
			cout << "00";
			for (int i = 2; i < 8; i++) {
				cout << str[i];
			}
		}

		else {
			for (int i = 0; i < 8; i++) {
				cout << str[i];
			}
		}
	}

	// Check if PM 07:23:24PM
	else {
		if (hh == 12) {
			cout << "12";
			for (int i = 2; i < 8; i++) {
				cout << str[i];
			}
		}
		else {
			hh = hh + 12;
			cout << hh;
			for (int i = 2; i < 8; i++) {
				cout << str[i];
			}
		}
	}
}

int main(){

	string str;
	cin >> str;
	print24(str);

	return 0;
	}