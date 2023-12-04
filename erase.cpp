#include <iostream>

using namespace std;

int main(){
    int n;
    string s1, s2;
    getline(cin, s1);
    n = stoi(s1, nullptr);
    getline(cin, s1);
    getline(cin, s2);

    bool even = n % 2 == 0;
    for(int i = 0; i < s1.length(); i++){
        if((even && s1[i] != s2[i]) || (!even && s1[i] == s2[i])){
            cout << "Deletion failed";
            return 0;
        }
    }
    cout << "Deletion succeeded";
    return 0;
}