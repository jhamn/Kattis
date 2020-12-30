#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n, j = 0;

    while(cin >> n && n != 0){
        j++;
        vector<string> v;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            v.push_back(s);
        }

        cout << "SET " << j << endl;

        if(v.size() % 2 == 1){
            int i = 0;
            for(; i < v.size(); i+=2){
                cout << v[i] << endl;
            }
            i -= 3;
            for(; i > 0; i-=2){
                cout << v[i] << endl;
            }
        }
        else{
            int i = 0;
            for(; i < v.size(); i+=2){
                cout << v[i] << endl;
            }
            i--;
            for(; i > 0; i-=2){
                cout << v[i] << endl;
            }
        }
    }
}
