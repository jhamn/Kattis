#include <iostream>

using namespace std;

int main()
{
    int p;
    cin >> p;
    for(int i = 0; i < p; i++)
    {
        int k, n;
        cin >> k >> n;
        int sum1 = n * (n + 1) / 2;
        int sum2 = n * n;
        int sum3 = n * (n + 1);
        cout << k << " " << sum1 << " " << sum2 << " " << sum3 << endl;
    }
    return 0;
}
