#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int tot = n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s.find("CD") != s.npos) tot--;
    }
    cout << tot << endl;
}
