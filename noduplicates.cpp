#include <iostream>
#include <unordered_set>

using namespace std;

typedef unordered_set<string> ss;

int main(){
    ss set;
    string s;
    while(cin >> s){
        if(set.count(s)){
            cout << "no" << endl;
            return 0;
        }
        set.insert(s);
    }
    cout << "yes" << endl;
}
