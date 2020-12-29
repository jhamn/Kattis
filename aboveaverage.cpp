#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

typedef vector<double> vd;

int main()
{
    int c;
    cin >> c;

    while(c--)
    {
        int n;
        cin >> n;
        vd a(n);
        double s = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        sort(a.begin(), a.end());
        double c = a.end() - upper_bound(a.begin(), a.end(), s/n);
        cout << setprecision(3) << fixed << double(c*100/n) << "%\n";
    }
    return 0;
}
