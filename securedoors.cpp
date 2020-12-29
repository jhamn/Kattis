#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_set<string> s;
    for(int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if(s1 == "entry")
        {
            if(s.count(s2))
            {
                cout << s2 << " entered (ANOMALY)" << endl;
            }
            else
            {
                cout << s2 << " entered" << endl;
                s.insert(s2);
            }
        }
        else
        {
            if(s.count(s2))
            {
                cout << s2 << " exited" << endl;
                s.erase(s2);
            }
            else
            {
                cout << s2 << " exited (ANOMALY)" << endl;
            }
        }
    }
    return 0;
}
