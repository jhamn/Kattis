#include <bits/stdc++.h>

using namespace std;

int main(){

    string s, res;
    cin >> s;

    int n = s.size();
    res.resize(n);
    int k = 0;

    for(char c : s){
        if(c == '<'){
            if(k > 0){
                k--;
            }
        }
        else{
            res[k++] = c;
        }
    }

    cout.write(res.data(), k);

    return 0;
}