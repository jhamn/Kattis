#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name, school, age;
        int courses;
        cin >> name >> school >> age >> courses;

        cout << name << " ";

        if(school >= "2010/00/00"){
            cout << "eligible" << endl;
            continue;
        }
        if(age >= "1991/00/00"){
            cout << "eligible" << endl;
            continue;
        }

        if(courses > 40){
            cout << "ineligible" << endl;
            continue;
        }
        cout << "coach petitions" << endl;
    }

}
