#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s;
    cin >> s;

    string::iterator it;
    it = unique(s.begin(), s.end());
    s.resize(distance(s.begin(),it));

    cout << s << endl;
}
