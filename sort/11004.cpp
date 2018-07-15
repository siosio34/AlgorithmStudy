#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int a[5000001];

int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	k-=1;
	
	for(int i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
	}
	nth_element(a, a+k, a+n);
	printf("%d",a[k]);
	return 0;

	
}