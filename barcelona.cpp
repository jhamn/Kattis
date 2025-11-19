#include <iostream>

int main(){

  int n, k, b, res;

  std::cin >> n >> k;

  for(int i = 0; i < n; i++){
    std::cin >> b;
    if(b == k){
      res = i;
      break;
    }
  }

  if(res == 0) std::cout << "fyrst";
  else if (res == 1) std::cout << "naestfyrst";
  else std::cout << res + 1 << " fyrst";

  return 0;
}
