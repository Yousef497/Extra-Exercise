#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int n;
	int input;
	int count = 0, maxi = 0;

	cin >> n;
	if ((n >= 1) && (n <= 1000000)) {
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> input;
			if ((input <= 100000000) && (input >= 1)) {
				arr[i] = input;
			}
		}

		for (int i = 0; i < n; i++) {
			if (arr[i] >= maxi) {
				maxi = arr[i];
			}
		}

		for (int i = 0; i < n; i++) {
			if (arr[i] >= maxi) {
				count++;
			}
		}

		cout << count;
	}

	return 0;
}