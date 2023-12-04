#include <iostream>

using namespace std;

int main(){
	long long n = 0, m = 0, count;
	char c;
	cin >> count;
	while(count--){
		cin >> c;
		if(isdigit(c)){
			n = n*10 + int(c - '0');
		}
		else{
			n = 0;
		}
		m = max(m,n);
	}
	cout << m;

	return 0;
}