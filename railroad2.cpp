#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    b % 2 == 0 ? cout << "possible" : cout << "impossible";
    return 0;
}