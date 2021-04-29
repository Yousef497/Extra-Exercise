#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char s[201];
    int a, b, i, j, k;
    cin >> s;
    k = strlen(s);
    a = 0;
    b = 0;
    for (i = 0; i < k; i++) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            if (b != 0 && a != 1)
                printf(" ");
            i = i + 2;
            // a case where the control for two or more WUB; a = 1
        }
        else {
            printf("%c", s[i]);
            b = 1;
            a = 0;
        }
    }
    printf("\n");

	return 0;
}