#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int a[1000001];

int main() {
	int n;
	
	for(int i = 3 ; i < 1000001 ; i++) {
		bool isPrime = true;
		for(int j = 2 ; j <= sqrt(i) ; j++) {
			if(i % j == 0) {
				isPrime = false;
				break;
			}
		}
		
		if(isPrime)
			a[i] = i;
	}

	while(scanf("%d",&n)) {
		if(n == 0)
			break;
		
		int min_num = 0;
		bool isGoldbach = false;
		
		for(int i = 3 ; i <= n ; i++) {
			if(a[n-i] > 0 && a[i] > 0) {
				printf("%d = %d + %d\n",n,i,n-i);
				isGoldbach = true;
				break;
			}
		}
		
		if(!isGoldbach) {
			printf("Goldbach's conjecture is wrong.\n");
		}
		
	}
}