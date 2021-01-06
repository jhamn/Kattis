#include <iostream>

using namespace std;

class FIB{
public:
    int fib(int n){
        int f[n+2];
        int i;

        f[0] = 0;
        f[1] = 1;

        for(i = 2; i <= n; i++){
            f[i] = f[i-1] + f[i-2];
        }
        return f[n];
    }
};

int main() {

    int k;
    cin >> k;

    FIB fib;
    cout << fib.fib(k-1) << " " << fib.fib(k) << endl;

}
