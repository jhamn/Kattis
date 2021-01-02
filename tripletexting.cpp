#include <iostream>
#include <string>
using namespace std;

int main(){

    string in;
    cin >> in;
    string one, two, three;
    int l = in.length()/3;

    for(int i = 0; i < in.length(); i++){
        if(i < l) one += in[i];
        else if (i >= l && i < l*2) two += in[i];
        else three += in[i];
    }
    if(one == two) cout << one << endl;
    else if(one == three) cout << one << endl;
    else cout << two << endl;
}
