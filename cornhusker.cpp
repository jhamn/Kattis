#include <iostream>

using namespace std;

int main(){
    int a1, a2, a3, a4, a5,
        l1, l2, l3, l4, l5, n, kwf, x;
    
    cin >> a1 >> l1 >> a2 >> l2 >> a3 >> l3 >> a4 >> l4 >> a5 >> l5 >> n >> kwf;
    x = ((a1*l1)+(a2*l2)+(a3*l3)+(a4*l4)+(a5*l5))/5;
    int res = (x*n)/kwf;
    cout << res;

    return 0;
}