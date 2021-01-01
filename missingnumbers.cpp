#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> temp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    temp.resize(v[n-1],false);
    if(temp.size() == v.size()) cout << "good job" << endl;
    else{
        for(int i = 1; i <= temp.size(); i++){
            for(int j = 0; j < v.size(); j++){
                if(i == v[j]) temp[i-1] = true;
            }
        }
        for(int i = 0; i < temp.size(); i++){
            if(!temp[i]) cout << i+1 << endl;
        }
    }
}
