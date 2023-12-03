#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    int n;
    string abbr;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(isupper(s[0])){
            abbr += s[0];
        }
    }
    cout << abbr;

    return 0;
}