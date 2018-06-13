#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a[10001];
int b[10001];
int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		a[i] = i;
	}

	
	do {
		for(int i = 1 ; i <= n ; i++) {
			printf("%d ",a[i]);
		} 
		printf("\n");
			
	} while (next_permutation(a+1, a+1+n));
	
	return 0;
}