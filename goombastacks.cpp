#include <iostream>

using namespace std;

int main(){
    int n, t=0, a, b;
    string res = "possible";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        t += a;
        if(t < b) res = "impossible";
    }
    cout << res;
    return 0;
}