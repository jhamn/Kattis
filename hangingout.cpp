#include <iostream>
#include <string>

using namespace std;

int main() {
    int max, events;
    cin >> max >> events;
    int counter = 0;
    int banned = 0;
    
    for (int i = 0; i < events; i++) {
        string what;
        int count;
        cin >> what >> count;
        if (what == "enter") {
            if (counter + count > max) {
                banned++;
            }
            else counter += count;
        }
        else {
            counter -= count;
        }
    }

    cout << banned << endl;

    return 0;
}
