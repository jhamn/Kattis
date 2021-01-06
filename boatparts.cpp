#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {

    int p, d;
    cin >> p >> d;
    bool print = false;
    unordered_set<string> uss;
    for(int i = 1; i <= d; i++){
        string s;
        cin >> s;
        uss.insert(s);
        if(uss.size() == p){
            cout << i << endl;
            print = true;
            break;
        }
    }
    if(!print){
        cout << "paradox avoided" << endl;
    }

}
