#include <iostream>

using namespace std;

int main(){
    double k;
    cin >> k;
    
    if     (k <  0.3) cout << "Logn";
    else if(k <  1.6) cout << "Andvari";
    else if(k <  3.4) cout << "Kul";
    else if(k <  5.5) cout << "Gola";
    else if(k <  8.0) cout << "Stinningsgola";
    else if(k < 10.8) cout << "Kaldi";
    else if(k < 13.9) cout << "Stinningskaldi";
    else if(k < 17.2) cout << "Allhvass vindur";
    else if(k < 20.8) cout << "Hvassvidri";
    else if(k < 24.5) cout << "Stormur";
    else if(k < 28.5) cout << "Rok";
    else if(k < 32.7) cout << "Ofsavedur";
    else              cout << "Farvidri";

    return 0;
}