#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    double cal = 400.0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        cout << int(ceil(temp/cal)) << endl;
    }
}
