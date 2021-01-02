#include <iostream>

using namespace std;

int main(){

    long int one, two;

    while(cin >> one >> two){
        if(one == 0 && two == 0){
            return 0;
        }
        cout << one/two << " " << one%two << " / " << two << endl;
    }
}
