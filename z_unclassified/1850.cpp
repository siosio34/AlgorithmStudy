#include <iostream>
#include <cstdio>
using namespace std;

long long int gcd(long long int a,long long int b) {
	if(b == 0) {
		return a;
	} else {
		return gcd(b,a%b);
	}
}

int main() {
	long long int a,b;
	cin >> a >> b;
	
	long long int tmp = gcd(a,b);
	int c = 1;
	for(int i = 0 ; i < tmp ; i++) {
		printf("%d",c);
	}

}