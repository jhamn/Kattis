#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> rev(vector<string>k)
{
    reverse(k.begin(),k.end());
    return k;
}

int main(){

    int n;
    cin >> n;

    vector<string> v;
    vector<string> w;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
        w.push_back(s);
    }

    sort(v.begin(), v.end());

    if(v == w) cout << "INCREASING" << endl;
    else if (v == rev(w)) cout << "DECREASING" << endl;
    else cout << "NEITHER" << endl;
}
