#include <iostream>

using namespace std;

typedef long long ll;

int main(){

    int width;
    cin >> width;

    ll n, area = 0;
    cin >> n;

    for(ll i = 0; i < n; i++){
        int l,w;
        cin >> w >> l;
        area += w*l;
    }
    cout << area/width << endl;
}
