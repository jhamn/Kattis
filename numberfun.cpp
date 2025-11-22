#include <iostream>

bool compare(int a, int b, int c){
    return
      a + b == c ||
      a - b == c ||
      b - a == c ||
      a * b == c ||
      (a % b == 0 && a / b == c) ||
      (b % a == 0 && b / a == c);
}

int main(){

    int n, a, b, c;

    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> a >> b >> c;
        std::cout << (compare(a, b, c) ? "Possible" : "Impossible") << std::endl;
    }

    return 0;
}