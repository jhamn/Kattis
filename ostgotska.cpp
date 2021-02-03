#include <iostream>
#include <string>

using namespace std;

int main() {

   string s;
   int words{}, count{};

   while(cin >> s){
        words++;
        for(int i = 0; i < s.length()-1; i++){
            if(s[i] == 'a' && s[i+1] == 'e'){
                count++;
                break;
            }
        }
   }

   if(words == 0 || double(count)/double(words) >= 0.4) cout << "dae ae ju traeligt va" << endl;
   else cout << "haer talar vi rikssvenska" << endl;

}
