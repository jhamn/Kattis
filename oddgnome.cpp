#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        vector<int> v(k);
        for(int j = 0; j < k; j++){
            cin >> v[j];
        }
        for(int t = 0; t < v.size(); t++){
            if(v[t] != v[t+1]-1){
                cout << t+2 << endl;
                break;
            }
        }
    }

}
