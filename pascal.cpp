#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout << "0";
        return 0;
    }

    for(int i = 2; i < sqrt(n)+1; i++){
        if(n % i == 0){
            cout << n - (n/i);
            return 0;
        }
    }
    cout << n - 1;
    return 0;
}