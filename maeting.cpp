#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    vector<int> L1(a);
    vector<int> L2(b);

    for(int i = 0; i < a; i++) cin >> L1[i];
    for(int i = 0; i < b; i++) cin >> L2[i];

    unordered_set<int> s(L2.begin(), L2.end());

    for(int i : L1){
        if(s.count(i)) cout << i << " ";
    }

    return 0;
}