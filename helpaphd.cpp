#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == "P=NP") cout << "skipped" << endl;
        else{
            int k = s.find('+');
            cout << stoi(s.substr(0,k)) + stoi(s.substr(k,s.length())) << endl;
        }
    }
}
