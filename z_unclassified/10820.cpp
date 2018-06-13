#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string s;
	int a,b,c,d;
	for(; getline(cin,s,'\n'); ) {
		a = b = c = d = 0;
		for(int i = 0 ; i < s.length() ; i++) {
			if(s[i] >= 'A' && s[i] <= 'Z') {
				b++;
			} else if(s[i] >= 'a' && s[i] <= 'z') {
				a++;
			} else if(s[i] == ' ') {
				d++;
			} else {
				c++;
			}
		}
		cout << a << " " << b << " " << c << " " << d<< endl; 
	}
}