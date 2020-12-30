#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printstring(vector<vector<int>> &v, vector<string> &s, int index){
    cout << s[index];
    for(int i : v[index]){
        printstring(v, s, i);
    }
}

int main(){
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<string> strings(n);

    for(int i = 0; i < n; i++){
        cin >> strings[i];
    }
    int idx = 0, first, second;
    vector<vector<int>> v2;
    v2.assign(n, vector<int>());
    for(int i = 0; i < (n-1); i++){
        cin >> first >> second;
        first--; second--;
        v2[first].push_back(second);
        idx = first;
    }

    printstring(v2, strings, idx);

    cout << endl;
}
