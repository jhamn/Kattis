#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int n, ps, npo;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> ps;
        int tot = 0;
        for(int j = 0; j < ps; j++){
            cin >> npo;
            tot += npo - 1;
        }
        cout << (tot + 1) << endl;
    }


    return 0;
}
