#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int a[500001];
int b[500001];
int check[500001];

int main() {
	int n;
	cin >> n;
	
	
	for(int i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
	}
	
	int k;
	cin >> k ;
	
	for(int i = 0 ; i < k ; i++) {
		scanf("%d",&b[i]);
	}
	
	sort(a,a+n);
	
	for(int i =0 ; i < k; i ++) {
		if(binary_search(a,a+n,b[i])) {
			cout << 1 << " ";
		} else {
			cout << 0 << " ";
		}
	}
}