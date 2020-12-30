#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int n, tot = 0;
    string s;
    vector<string> ans;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        ans.push_back(s);
    }
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == ans[i+1])  tot++;
    }
    cout << tot << endl;
    return 0;
}
