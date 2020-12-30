#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string s;
    vector<string> v;
    string delimiter = ";";
    string del = "-";
    int tmp = 0, sum = 0;
    size_t pos = 0, pos2 = 0;

    cin >> s;
    while((pos = s.find(delimiter)) != string::npos){
        v.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    v.push_back(s);



    for(int i = 0; i < v.size(); i++){
        sum++;
        if((pos2 = v[i].find(del)) != string::npos){
            vector<string> k;
            k.push_back(v[i].substr(0,pos2));
            v[i].erase(0,pos2 + del.length());
            k.push_back(v[i]);
            int start = stoi(k[0]);
            int end = stoi(k[1]);
            for(int j = start; j < end; j++){
                tmp++;
            }
        }
    }


    cout << sum + tmp << endl;
}
