#include <iostream>
#include <math.h>

using namespace std;

int num(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    return pow(2, n-1) - 1 + num(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << num(n);
    return 0;
}