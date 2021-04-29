#include <iostream>

using namespace std;

int main(){

    int a,b,c,sum;
    
    while(a < 1 || b < 1 || c < 1 || a > 1000 || b > 1000 || c > 1000){
    cin >> a >> b >> c;
    };
    sum = a + b + c;
    cout << sum <<'\n';
    
    
    return 0;
}