#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string s;
    cin >> s;

    vector<int> v;
    v.resize(26,0);
    for(auto c : s){
        v[c - 'a']++;
    }
    int odd = 0;
    for(auto i : v){
        if(i % 2 == 1){
            odd++;
        }
    }

    int result = odd - 1;
    if(result < 0) result = 0;

    cout << result << endl;
}
