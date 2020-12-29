#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, v;
    cin >> h >> v;
    cout << ceil(h / cos((90 - v) * M_PI / 180));
    
    return 0;
}
