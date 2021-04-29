#include <cmath>
#include <iostream>

using namespace std;

int solveMeFirst(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}


int main() {
    
    int a,b,sum;
    cin >> a >> b;
    if((a >= 1) && (b >= 1) && (a <= 1000) && (b <= 1000)){
        sum = solveMeFirst(a,b);
        cout << sum;
    }
    
    return 0;
}