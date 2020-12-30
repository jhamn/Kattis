#include <iostream>
#include <string>

using namespace std;

int main(){
    int k;
    cin >> k;
    
    string simon = "Simon says";
    cin.ignore();
    for(int i = 0; i < k; i++){
        string s;
        getline(cin, s);
        if(s.find(simon) == 0){
            s.erase(s.begin(), s.begin()+10);
            cout << s << endl;
        }
    }
    
}
