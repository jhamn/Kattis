#include <iostream>

using namespace std;

int main()
{
    int t, c, g;
    t = c = g = 0;

    string s;
    cin >> s;

    for(int i = 0; i < size(s); i++)
    {
        switch(s[i])
        {
            case 'T': t++; break;
            case 'G': g++; break;
            case 'C': c++; break;
        }
    }
    int m = min(min(t,g),c);
    cout << t*t + c*c + g*g + m*7;
    return 0;
}
