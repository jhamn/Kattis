
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double c, n, w, l, a = 0;
    cin >> c;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> w >> l;
        a += w * l * c;
    }

    cout << setprecision(10) << fixed << a;

    return 0;
}
