#include <iostream>
using namespace std;
int main()
{
    string d[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    int m[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < 12; i++) m[i + 1] += m[i];
    int k = (m[b - 1] + a - 1) % 7;
    cout << d[k];
    return 0;
}
