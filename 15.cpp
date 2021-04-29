#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int N;
	cin >> N;
	float n = 0, p = 0, z = 0, total = 0;

	while (N--) {
		int t;
		cin >> t;
		total++;
		if ((t >= (-100)) && (t < 0)) {
			n++;
		}
		else if ((t > 0) && (t <= 100)) {
			p++;
		}
		else {
			z++;
		}
	}

	cout << fixed << p / total << "\n";
	cout << fixed << n / total << "\n";
	cout << fixed << z / total << "\n";

	return 0;
}