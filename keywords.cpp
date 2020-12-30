#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v;
    unordered_set<string> uss;
    string temp;
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, temp);
        for(char &j : temp){
            j = tolower(j);
            if(j == '-') {
                j = ' ';
            }
            s += j;
        }
        uss.insert(s);
    }
    cout << uss.size() << endl;
}
