#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int guests;
        cin >> guests;
        vector<long int> v;

        cout << "Case #" << i+1 << ": ";

        for(int j = 0; j < guests; j++){
            long int num;
            cin >> num;
            v.push_back(num);
        }

        sort(v.begin(), v.end());
        bool printed = false;
        for(int i = 0; i < v.size() - 1; i+=2){
            if(v[i] != v[i+1] && !printed){
                cout << v[i] << endl;
                printed = true;
            }
        }
        if(!printed){
            cout << v[guests - 1] << endl;
        }
    }
}
