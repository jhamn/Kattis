#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int d, m;
        cin >> d >> m;

        vector<int> y;
        for(int j = 0; j < m; j++){
            int days;
            cin >> days;

            for(int k = 1; k <= days; k++){
                y.push_back(k);
            }
        }
        int fridays = 0;

        for(int j = 0; j < d; j++){
            if(y[j] == 13 && j % 7 == 5) fridays++;
        }
        cout << fridays << endl;
    }
}
