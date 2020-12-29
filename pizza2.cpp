#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    double Atot = M_PI * r * r;
    double A = M_PI * (r-c) * (r-c);
    cout << setprecision(20) << fixed << (A / Atot) * 100;
    return 0;
}
