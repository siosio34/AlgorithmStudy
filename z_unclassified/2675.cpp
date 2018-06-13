#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	int repeatNum;
	string s;
	cin >> t;
	
	while(t--) {
		cin >> repeatNum;
		cin >> s;
		
		for(int i =0 ; i<s.size() ; i++) {
			for(int j = 0 ; j < repeatNum ; j++) {
				cout << s[i] ;
			}
		}
		cout << endl;
	}
}