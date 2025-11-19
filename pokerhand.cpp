#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

  map<char, int> count;
  string card;

  for(int i = 0; i < 5; i++){
    cin >> card;
    char c = card[0];
    count[c]++;
  }

  int str = 0;
  for(auto &i : count){
    if(i.second > str){
      str = i.second;
    }
  }

  cout << str;

  return 0;
}
