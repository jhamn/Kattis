#include <iostream>

using namespace std;

typedef long long ll;

int main(){

    ll c, n;
    cin >> c >> n;

    ll current = 0;

    bool possible = true;
    for(ll i = 0; i < n; i++){
        ll in, out, left;
        cin >> out >> in >> left;

        current -= out;
        if(current < 0){
            possible = false;
        }

        current += in;
        if(current > c){
            possible = false;
        }
        if(left > 0 && current < c){
            possible = false;
        }
        if(left > 0 && i == n-1){
            possible = false;
        }
        if(current != 0 && i == n-1){
            possible = false;
        }
    }
    if(possible) cout << "possible" << endl;

    else cout << "impossible" << endl;

}
