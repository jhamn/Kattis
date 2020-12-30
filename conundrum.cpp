#include <iostream>
#include <string>

using namespace std;

int main() {
    string per = "PER";
    string s;
    int count = 0;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        if(c != per[i%3]){
            count++;
        }
    }
    cout << count;
    return 0;
}
