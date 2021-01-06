#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<string> v, result;
    string s;

    while(cin >> s){
        v.push_back(s);
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(i != j){
                string temp = v[i] + v[j];
                result.push_back(temp);
            }
        }
    }

    sort(result.begin(), result.end());

    string last = "";
    for(int i = 0; i < result.size(); i++){
        if(last != result[i]){
            cout << result[i] << endl;
            last = result[i];
        }
    }
}
