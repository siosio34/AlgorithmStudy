#include <iostream>
using namespace std;

long long int gcd(int a,int b) {
	
	if(b == 0) {
		return a;
	} else {
		return gcd(b, a%b);
	}
}

int main() {
	long long int a,b;
	cin >> a >> b;
	
	long long int num = gcd(a,b);
	cout << num * (a/num) * (b/num) << endl;
	
}