#include <iostream>

using namespace std;

int main(){
    long n, p, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p;
        sum += p;
    }
    sum % 3 == 0 ? cout << "yes" : cout << "no";

    return 0;
}