#include <iostream>
#include <unordered_set>

using namespace std;

typedef unordered_set<string> ss;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        ss s;
        int t;
        cin >> t;
        for(int j = 0; j < t; j++){
            string u;
            cin >> u;
            s.insert(u);
        }
        cout << s.size() << endl;
    }
}
