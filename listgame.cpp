#include <iostream>

using namespace std;

void factors(int n) {
    int factors = 0;
    int factor = 2;
    while (factor * factor <= n) {
        if (n % factor == 0) {
            n /= factor;
            factors++;
        }
        else
            factor++;
    }
    cout << factors + 1 << endl;
}

int main() {
    int n;
    cin >> n;
    factors(n);
    return 0;
}
