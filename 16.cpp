#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int N,i,j,k;
	cin >> N;
	if ((N > 0) && (N <= 100)) {
		for (i = 1; i <= N; i++) {
			for (j = 1; j <= N - i; j++) {
				cout << " ";
			}

			for (k = j; k <= N; k++) {
				cout << "#";
			}

			cout << "\n";
		}
	}

	return 0;
}