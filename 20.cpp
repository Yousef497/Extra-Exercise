//T - 2D Array - DS

#include <iostream>

using namespace std;

//Hourglass Sum Function
int hourglass_sum(int arr[6][6], int i, int j) {
	int ans = 0;
	ans = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] +
		arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

	return ans;
}

int main() {

	int arr[6][6];

	//Array Input
	for (auto& i : arr) {
		for (int &j : i) {
			cin >> j;
		}
	}

	int ans = -63;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (hourglass_sum(arr, i, j) > ans) {
				ans = hourglass_sum(arr, i, j);
			}
		}
	}

	cout << ans;

	return 0;
}