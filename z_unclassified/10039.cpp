#include <iostream>
using namespace std;

int main() {
	
	int sum = 0;
	int tmp;
	for(int i =0 ; i< 5 ; i++) {
		cin >> tmp;
		if(tmp < 40) {
			tmp = 40;
		} 
		sum += tmp;
	}
	cout << sum / 5 ;
}