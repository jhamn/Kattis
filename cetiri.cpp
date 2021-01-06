#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {

    int first, second, third;
    cin >> first >> second >> third;

    vector<int> v;
    v.push_back(first);
    v.push_back(second);
    v.push_back(third);

    sort(v.begin(), v.end());

    int diff1 = v[1]-v[0], diff2 = v[2]-v[1];

    if(diff1 == 0 || diff2 == 0) cout << v[0] << endl;
    else if(diff1/diff2 != 1){
        if(abs(diff1 - diff2) > 0) cout << diff2 + v[0] << endl;
        else cout << diff1 + v[0] << endl;
    }
    else cout << v[2] + diff1 << endl;
}
