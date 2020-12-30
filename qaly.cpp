#include <iostream>

using namespace std;

int main() {
    int n;
    double q,y, qaly = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> q >> y;
        qaly += q*y;
    }

    cout << qaly << endl;
    return 0;
}
