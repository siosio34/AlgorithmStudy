
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int a[1000001];

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main() {
	int t;
	cin >> t;
	
	for(int i = 0 ; i < t ; i++) {
		scanf("%d",&a[i]);
	}
	
	qsort(a,t,sizeof(int),compare);
	for(int i = 0 ; i < t ; i++) {
		printf("%d\n",a[i]);
	}

}