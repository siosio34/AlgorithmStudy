#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	string a,b;
	
	while(t--) {
		cin >> a >> b;
		
		cout <<"Distances:";
		for(int i = 0 ; i <a.size() ; i++) {
			cout << " " << (a[i] <= b[i] ? (int)(b[i]-a[i]) : (int)b[i] + 26 - (int)a[i]);
		}
		cout << endl;
	}
}