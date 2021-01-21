#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s, t;
    cin >> s;

    t = s;

    next_permutation(t.begin(), t.end());

    if(t <= s) cout << "0" << endl;
    else cout << t << endl;

}
