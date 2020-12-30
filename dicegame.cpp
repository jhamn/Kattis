#include <iostream>

using namespace std;

int main(){
    int a1, a2, a3, a4, b1, b2, b3, b4;
    int Asides, Bsides;

    cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4;

    Asides = a1 + a2 + a3 + a4;
    Bsides = b1 + b2 + b3 + b4;

    if(Asides > Bsides) cout << "Gunnar" << endl;
    else if(Asides == Bsides) cout << "Tie" << endl;
    else cout << "Emma" << endl;
}
