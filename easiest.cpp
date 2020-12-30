#include <iostream>

using namespace std;

int getDigits(int num);

int main() {

    int n;
    cin >> n;

    while(n != 0){
        int k = 11;
        while(getDigits(n) != getDigits(n * k)){
            k++;
        }
        cout << k << endl;
        cin >> n;
    }

}

int getDigits(int num){
    int digits = 0;
    while(num > 0){
        digits += num % 10;
        num /= 10;
    }
    return digits;
}
