#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int c = 0;
    string p1, p2;
    cin >> p1 >> p2;
    for(int i = 0; i < p1.length(); i++){
        if(p1[i] != p2[i])
            c++;
    }
    cout << pow(2, c);
    return 0;
}