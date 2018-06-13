#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a[10001];
int main() {
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
	}
	int cnt = 0;
	do {
		if(cnt == 0) {
			cnt++;
			continue;
		} else {
			for(int i = 0 ; i < n ; i++) {
				cout << a[i] << " ";
			} 
			
			return 0;
		}
	} while (prev_permutation(a, a+n));
	
	cout << -1 << endl;
	return 0;
}