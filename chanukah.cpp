#include <iostream>

using namespace std;

int main() {

    int n, d, days;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> d >> days;
        int tot = 0;
        for(int j = 1; j <= days; j++){
            tot += j+1;
        }
        cout << d << " " << tot << endl;
    }

    return 0;
}
