#include <iostream>

using namespace std;

int main(){
    int n, res = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        res += k;
    }
    cout << res / n;
    return 0;
}