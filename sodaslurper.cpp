#include <iostream>

using namespace std;

int main(){

    int a, b, cost;
    cin >> a >> b >> cost;

    int bottles = a + b;
    int total = 0;

    while(bottles >= cost){
        int drank = bottles / cost;
        int remaining = bottles % cost;

        total += drank;
        bottles = drank + remaining;
    }
    cout << total << endl;
}
