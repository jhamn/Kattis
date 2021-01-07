#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int p0, p1, t0,t1;
    while(true){
        string play1, play2;
        cin >> p0 >> p1 >> t0 >> t1;

        if(p0 == 0 && p1 == 0 && t0 == 0 && t1 == 0) return 0;

        play1 = to_string(max(p0,p1)) + to_string(min(p0,p1));
        play2 = to_string(max(t0,t1)) + to_string(min(t0,t1));

        if(play1 == play2) cout << "Tie." << endl;
        else{
            if(p0 == 1 && p1 == 2 || p0 == 2 && p1 == 1){
                cout << "Player 1 wins." << endl;
                continue;
            }
            else if(t0 == 1 && t1 == 2 || t0 == 2 && t1 == 1){
                cout << "Player 2 wins." << endl;
                continue;
            }
            else if(p0 == p1 && t0 != t1){
                cout << "Player 1 wins." << endl;
                continue;
            }
            else if(p0 != p1 && t0 == t1){
                cout << "Player 2 wins." << endl;
                continue;
            }
            else if(play1 < play2){
                cout << "Player 2 wins." << endl;
                continue;
            }
            else{
                cout << "Player 1 wins." << endl;
                continue;
            }
        }
    }

}
