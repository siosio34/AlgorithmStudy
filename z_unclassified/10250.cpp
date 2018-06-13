#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	int a,b,c;
	
	while(t--) {
		cin >> a >> b >> c;
		
		int tmp = (c-1) % a + 1;
		int roomNumber = (c-1) / a + 1;
		

		 printf("%d%02d\n", (c % a)? c % a : a, + ((c - 1) / a) + 1);

		
		// 층수 c % a
		// 호수 수 c / a
	}
}