#include <iostream>
#include <string>
using namespace std;

bool check[26];
int main() {
	int t;
	string s;
	cin >>t;
	
	while(t--) {
		cin >> s;
		for(int i = 0 ; i < 26 ; i++) {
			check[i] = false;
		}
		for(int i = 0 ; i < s.size() ; i++) {
			check[(int)(s[i] - 'A')] = true;
		}
		
		int sum = 0 ;
		for(int i = 0 ; i < 26 ; i++) {
			if(!check[i]) {
				sum += i + (int)'A';	
			}
				
		}
		cout << sum << endl;
	}
}