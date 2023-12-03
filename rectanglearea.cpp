#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    cout << fixed;
    cout << setprecision(3);
    cout << abs((x1 - x2) * (y1 - y2));

    return 0;
}