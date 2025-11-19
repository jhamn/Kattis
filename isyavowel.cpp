#include <iostream>
#include <string>

using namespace std;

int main(){

  string s;
  cin >> s;

  int y   = 0;
  int noy = 0;

  for(char c : s){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o'){
      y++;
      noy++;
    }
    else if(c == 'y'){
      y++;
    }
  }

  cout << noy << " " << y;

  return 0;
}
