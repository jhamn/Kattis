#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<bool> p, k, h, t;

    p.resize(13,false);
    k.resize(13,false);
    h.resize(13,false);
    t.resize(13,false);

    string s;

    int P = 13, K = 13, H = 13, T = 13;
    cin >> s;

    bool dup = false;

    for(int i = 0; i < s.size(); i+=3){
        char suit = s[i];
        int num = 10*(s[i+1] - '0') + (s[i+2] - '0');

        if(suit == 'P'){
            if(p[num]){
                dup = true;
                cout << "GRESKA" << endl;
                break;
            }
            else{
                p[num] = true;
                P--;
            }
        }
        if(suit == 'K'){
            if(k[num]){
                dup = true;
                cout << "GRESKA" << endl;
                break;
            }
            else{
                k[num] = true;
                K--;
            }
        }
        if(suit == 'H'){
            if(h[num]){
                dup = true;
                cout << "GRESKA" << endl;
                break;
            }
            else{
                h[num] = true;
                H--;
            }
        }
        if(suit == 'T'){
            if(t[num]){
                dup = true;
                cout << "GRESKA" << endl;
                break;
            }
            else{
                t[num] = true;
                T--;
            }
        }
    }

    if(!dup){
        cout << P << " " << K << " " << H << " " << T << endl;
    }
}
