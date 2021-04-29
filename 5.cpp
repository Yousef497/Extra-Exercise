#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    
    string one[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int high = pow(10,9);
    int n;
    cin >> n;
    if(n >= 1 && n <= high){
        if(n <= 9){
            cout << one[n];
        }
        else{
            cout << "Greater than 9";
        }
    }
    
    return 0;
}