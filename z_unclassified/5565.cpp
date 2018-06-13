#include <iostream>
using namespace std;

int main() {
	int n ;
	
	cin >> n ;
	int tmp;
	for(int i = 0 ; i < 9 ; i++) {
		cin >> tmp;
		n-= tmp;
	}
	cout << n;
}