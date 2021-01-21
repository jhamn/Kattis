#include <iostream>
#include <string>

using namespace std;

int main() {

    int white = 0, black = 0;
    string s;
    cin >> s;

    for(char i : s){
        if(i == 'W') white++;
        else black++;
    }

    if(white == black) cout << "1" << endl;
    else cout << "0" << endl;
}
