#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

long long s;

bool checkNum(long long num) {
	return s & (1 << num);
}

int main() {
	long long t, num;
	string tmp;
	
	cin >> t;

	long long ans;
	ios_base::sync_with_stdio(false);
	while(t--) {
		cin >> tmp;
		if(tmp == "add") {
			cin >> num;
			s |= ( 1 << num );		
		} else if(tmp == "remove") {
			cin >> num;
			s &= ~( 1 << num );
		} else if(tmp == "check") {
			cin >> num;
			if(s & (1<<num)) {
				printf("%d\n", 1);
			} else
			   printf("%d\n", 0);
		} else if(tmp == "toggle") {
			cin >> num;
			s ^= (1 << num);
		} else if(tmp == "all") {
			s = (1 << 21) - 1;
		} else if(tmp == "empty") {
			s = 0;
		}
	}
}