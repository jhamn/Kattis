#include <iostream>

int main(){
  int b, b_r, b_s, a, a_s, a_r;
  std::cin >> b >> b_r >> b_s >> a >> a_s;
  a_r = ((b_r - b) * b_s / a_s + a) + 1;
  std::cout << a_r;
  return 0;
}
