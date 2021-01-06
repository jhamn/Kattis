#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int points;
        cin >> points;

        vector<pair<int, int>> v;
        for(int j = 0; j < points; j++){
            pair<int, int> p;
            cin >> p.first >> p.second;
            v.push_back(p);
        }
        double area = 0;

        for(int j = 0, k = 1, s = v.size(); j < s; j++, k=(j+1)%s){
            area += (v[j].first * v[k].second) - (v[j].second * v[k].first);
        }
        cout << area/2 << endl;
    }
}
