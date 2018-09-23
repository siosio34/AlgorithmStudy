#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int permutation[9];

int main() {
	int n;
	cin  >> n ;
	
	for(int i = 0 ; i < n ; i++) {
		permutation[i] = i+1;
	}
	
	do {
		for(int i = 0 ; i < n ; i++) {
			printf("%d ",  permutation[i]);
		} 
		printf("\n");
	} while(next_permutation(permutation, permutation + n));
	
	return 0;
	
}