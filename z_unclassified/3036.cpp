#include <iostream>
using namespace std;

int a[101];

int gcd(int a,int b) {
	if(b == 0) {
		return a;
	} else {
		return gcd(b,a%b);
	}
}
int main() {
	int n;
	cin >> n;
	
	for(int i =0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	for(int i = 1 ; i < n ; i++) {
		int tmp = a[i] > a[0] ? gcd(a[0],a[i]) : gcd(a[i],a[0]);
		
		cout << a[0] / tmp << "/" << a[i] / tmp << endl;
	}
}