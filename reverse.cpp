#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v;
    int n,s;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }

    reverse(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }

    return 0;
}
