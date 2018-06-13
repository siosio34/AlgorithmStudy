#include <iostream>
using namespace std; 

int main() {
	
	int t;
	cin >> t;
	
	int r,e,c;
 	while(t--) {
		cin >> r>> e>> c;
		int sum = r+ c;
		
		if(sum == e){
			cout << "does not matter" << endl;
		} else if(sum > e) {
			cout << "do not advertise" << endl;
		} else if(sum < e) {
			cout << "advertise" << endl;
		}
	}
	
	
}