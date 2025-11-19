#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, res = 0;
  string p;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> p;

    if(p.rfind("+39", 0) != 0) continue;

    string r = p.substr(3);
    if(r.size() == 9 || r.size() == 10){
      if(all_of(r.begin(), r.end(), ::isdigit))
        res++;
    }
  }

  cout << res;

  return 0;
}
