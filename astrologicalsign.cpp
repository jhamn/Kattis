#include <iostream>
#include <string>

using namespace std;

int main() {

    int d,k;
    string m;
    cin >> k;
for(int i = 0; i < k; i++){

    cin >> d >> m;

    if(m == "Jan"){
        if(d < 21)  cout << "Capricorn" << endl;
        else cout << "Aquarius" << endl;
    }
    else if(m == "Feb"){
        if(d < 20)  cout << "Aquarius" << endl;
        else cout << "Pisces" << endl;
    }
    else if(m == "Mar"){
        if(d < 21)  cout << "Pisces" << endl;
        else cout << "Aries" << endl;
    }
    else if(m == "Apr"){
        if(d < 21)  cout << "Aries" << endl;
        else cout << "Taurus" << endl;
    }
    else if(m == "May"){
        if(d < 21)  cout << "Taurus" << endl;
        else cout << "Gemini" << endl;
    }
    else if(m == "Jun"){
        if(d < 22)  cout << "Gemini" << endl;
        else cout << "Cancer" << endl;
    }
    else if(m == "Jul"){
        if(d < 23)  cout << "Cancer" << endl;
        else cout << "Leo" << endl;
    }
    else if(m == "Aug"){
        if(d < 23)  cout << "Leo" << endl;
        else cout << "Virgo" << endl;
    }
    else if(m == "Sep"){
        if(d < 22)  cout << "Virgo" << endl;
        else cout << "Libra" << endl;
    }
    else if(m == "Oct"){
        if(d < 23)  cout << "Libra" << endl;
        else cout << "Scorpio" << endl;
    }
    else if(m == "Nov"){
        if(d < 23)  cout << "Scorpio" << endl;
        else cout << "Sagittarius" << endl;
    }
    else{
        if(d < 22)  cout << "Sagittarius" << endl;
        else cout << "Capricorn" << endl;
    }
}
    return 0;
}
