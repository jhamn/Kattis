#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;

        double out = 0;
        for(int j = 0; j < temp; j++){
            out += 0.5;
            out *= 2;
        }
        cout << (long long)out << endl;
    }
}
