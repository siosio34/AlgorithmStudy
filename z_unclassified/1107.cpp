#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool breaked[11];

int possible(int c){ 
	if (c == 0) {
		return breaked[0] ? 0 : 1;
	}
	int len = 0;
	while(c > 0) {
		if(breaked[c % 10])
			return 0;
		len+= 1;
		c /= 10;
	}
	return len;
}

int main() {
	int n,m,tmp;
	cin >> n >> m;
	
	for(int i = 0 ;i <m ; i++) {
		cin >> tmp;
		breaked[tmp] = true;
	}
	int min_value = abs(n-100);
	int k;
	for(int i = 0 ; i <= 1000000 ; i++) {
		k = possible(i);
		if(k != 0) {
			k = k + abs(n-i);
			if(k < min_value) {
				min_value = k;
			}
		}
			
	}
	cout << min_value ;
}