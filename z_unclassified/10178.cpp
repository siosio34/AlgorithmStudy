#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a,b;
	for(int i = 0 ; i < n ; i++) {
		cin >> a >> b;
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", a /b , a%b );
	}
}