#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, d, res = 0;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> d;
    if(d % 2 != 0) res++;
  }

  cout << res;

  return 0;
}
