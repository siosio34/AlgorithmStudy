#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int k = 10;
	
	cin >> s;
	
	for(int i = 1 ; i < s.size() ; i++) {
		if(s[i] != s[i-1])
			k+= 10;
		else 
			k+= 5;
	}
	cout << k << endl;
}