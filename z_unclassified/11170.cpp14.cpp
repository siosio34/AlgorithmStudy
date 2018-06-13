#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	int a;
	int b;
	
	while(t--) {
		cin >> a >> b;
		
		int cnt = 0;
		for(int i = a ; i <= b ; i++) {
			string k = to_string(i);
			
			for(int l = 0 ; l < k.size() ; l++) {
				if(k[l] == '0') {
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}