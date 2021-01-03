#include <iostream>

using namespace std;

int main(){

    int n, T, sum = 0, i = 0;

    cin >> n >> T;

    for(; i < n; i++){
        int temp;
        cin >> temp;
        sum += temp;
        if(sum > T){
            break;
        }
    }
    cout << i << endl;
}
