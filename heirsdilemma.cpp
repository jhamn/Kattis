#include <iostream>
#include <vector>

using namespace std;

bool works(int n){
    int temp{n};

    vector<int> v(10,0);

    while(n > 0){
        if((n%10) == 0) return false;
        if(temp%(n%10) != 0) return false;
        v[n%10]++;
        n/=10;
    }

    for(auto i : v){
        if(i > 1) return false;
    }
    return true;

}

int main() {

    int hi, lo;

    cin >> lo >> hi;

    int total{};
    for(int i = lo; i <= hi; i++){
        if(works(i)){
            total++;
        }
    }

    cout << total << endl;

}
