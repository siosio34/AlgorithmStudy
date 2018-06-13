#include <iostream>
using namespace std;

int main() {
	
	int tmp;
	int s = 0;
	int t = 0;
	for(int i = 0 ; i <4 ; i++) {
		cin >> tmp;
		s+=tmp;
	}
	
	for(int i = 0 ; i <4 ; i++) {
		cin >> tmp;
		t+= tmp;
	}
	
	cout << ( s < t ? t : s) ;
	
}