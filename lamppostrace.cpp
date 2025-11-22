#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, a, b, res = 0;
  cin >> n >> a;
  res = a;
  while(--n){
    cin >> b;
    res += abs(b - a);
    a = b;
  }

  cout << res;

  return 0;
}
