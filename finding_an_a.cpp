#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == 'a'){
            for(int j = i; j < a.length(); j++){
                cout << a[j];
            }
            return 0;
        }
    }
}
