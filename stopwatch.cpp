#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  int n, a, tot = 0;
  cin >> n;

  if(n % 2 != 0){
    cout << "still running";
  }
  else{
    for(int i = 0; i < n; i++){
      cin >> a;
      v.push_back(a);
    }

    for(int i = 0; i < v.size()-1; i+=2){
      tot += v[i+1] - v[i];
    }
    cout << tot;
  }

  return 0;
}
