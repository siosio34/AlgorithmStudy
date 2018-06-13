#include <iostream>
using namespace std;

int gcd(int a,int b) {
	if(b == 0) {
		return a;
	} else {
		return gcd(b, a%b);
	}
}

int main() {
	int t;
	cin >> t;
	
	int a,b;
	
	while(t--) {
		cin >> a >> b;
		
		int num = gcd(a,b);
		
		int tmp = num * (a / num) * (b / num);
		cout << tmp << endl;
		
	}
}