#include <iostream>

using namespace std;

int main() {

	unsigned long long n, m, a;
	long long int l, w;
	
	cin >> n >> m >> a;
	if ((1 <= n <= (10 ^ 9)) && (1 <= m <= (10 ^ 9)) && (1 <= a <= (10 ^ 9))) {
		l = n / a;
		w = m / a;

		if (l * a != n)
			l++;
		if (w * a != m)
			w++;

		cout << (l * w);
	}

	return 0;
}