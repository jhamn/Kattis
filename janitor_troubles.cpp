#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double maxArea(double a, double b, double c, double d){

    double e = (a + b + c + d) / 2;

    return sqrt((e - a) * (e - b) * (e - c) * (e - d));
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << fixed;
    cout << setprecision(12);
    cout << maxArea(a, b, c, d);

    return 0;
}