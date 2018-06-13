#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string s;
	while(getline(cin,s)) {
		if(s == "END")
			return 0;
		else {
			for(int i = s.size()-1 ; i >=0 ; i--) {
				cout <<s[i];
			}
		}
		cout << endl;
	}
	

	
	
}