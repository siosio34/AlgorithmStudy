#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	string tmp;
	int num;
	
	int maxNum = -1;
	string maxSchool ="";
	while(t--) {
		int k;
		cin >> k;
		for(int i = 0 ; i < k ; i ++) {

		cin >> tmp >> num;
		if(num > maxNum) {
			maxNum = num;
			maxSchool = tmp;
		} 
						
		}
		cout << maxSchool << endl;
	}


	
}