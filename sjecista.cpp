#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int k = n - 3, total = 0;

    for(int i = 1; i <= k; i++){
        for(int j = k - i + 1; j >= 1; j--){
            total += j*i;
        }
    }
    cout << total << endl;
}
