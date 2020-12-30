#include <iostream>

using namespace std;

unsigned int factorial(unsigned int n){
    if(n == 0)
        return 1;
    return n*factorial(n-1);
}

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        int f = factorial(k);
        if(f > 9){
            cout << f%10 << endl;
        }
        else cout << f << endl;
    }

}
