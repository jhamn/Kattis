#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main(){
    ll r;
    cin >> r;
    
    cout << fixed;
    cout.precision(5);
    
    cout << abs(r*r)*M_PI << endl;
    cout << 2*abs(r*r) << endl;
    
}
