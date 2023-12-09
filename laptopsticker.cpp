#include <iostream>

using namespace std;

int main(){
    int x, a, b, c, d;
    cin >> a >> b >> c >> d;
    x = (a - c > 1 && b - d > 1) ? 1 : 0;
    cout << x;
    return 0;
}
