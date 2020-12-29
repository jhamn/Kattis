#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, s1;
    cin >> s >> s1;
    if(s == "OCT" && s1 == "31" || s == "DEC" && s1 == "25") cout << "yup" << endl;
    else cout << "nope" << endl;
}
