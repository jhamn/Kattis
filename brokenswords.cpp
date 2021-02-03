#include <iostream>

using namespace std;

int main() {

    int swords, tb{}, lr{};
    cin >> swords;

    while(swords-- > 0){
        char slat;
        for(int i = 0; i < 4; i++){
            cin >> slat;
            if(i < 2 && slat == '0') tb++;
            if(i >= 2 && slat == '0') lr++;
        }
    }

    int tot = min(tb/2, lr/2);
    int remaining = tot*2;
    cout << tot << " " << tb - remaining << " " << lr-remaining << endl;

}
