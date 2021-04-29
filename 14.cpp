#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int N, d1=0, d2=0, input;
	int i, j;

	cin >> N;
	int arr[N][N];

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cin >> input;
			if ((input >= (-100)) && (input <= 100)) {
				arr[i][j] = input;
			}
		}
	}

	for(i = 0; i < N; i++) {
		d1 += arr[i][i];
		d2 += arr[i][N - 1 - i];
	}

	int ans = abs(d1 - d2);
	cout << ans;

	return 0;
}