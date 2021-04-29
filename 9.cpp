#include <cmath>
#include <iostream>

using namespace std;

int main() {
    
    string a,b;
    cin >> a >> b;
    
    int len_a, len_b;
    len_a = a.size();
    len_b = b.size();
    
    cout << len_a << " " << len_b << "\n";
    cout << a+b << "\n";
    
    char c,d;
    c = a[0];
    d = b[0];
    a[0] = d;
    b[0] = c;
    cout << a << " " << b;
    
    return 0;
}