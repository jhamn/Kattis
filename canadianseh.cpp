#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    s.substr(s.length() - 3) == "eh?" ? cout << "Canadian!" : cout << "Imposter!";

    return 0;
}