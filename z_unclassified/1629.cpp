#include <iostream>
using namespace std;

long long int c;
long long int calc(long long int a,long long int b) {
	if(b ==0) {
		return 1;
	} else if(b == 1) {
		return a;
	} else if(b % 2 == 0) {
		long long int temp = calc(a, b/2) % c;
		return (temp * temp) % c;
	} else {
		return a * calc(a,b-1) % c;
	}
}

int main() {
	long long int a,b;
	cin >> a >> b >> c;
	
	cout << calc(a,b) % c << endl;
	
	
	
}