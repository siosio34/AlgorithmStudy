#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

bool isContain(int s, int n) {
	return s & (1 << n);
}

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	string cmd;
	
	int s = 0;

	while(t--) {
		cin >> cmd;
		
		if(cmd == "add") {
			int num;
			cin >> num;
			
			if(isContain(s,num)) 
				continue;
			else 
				s = s | (1 << num);
			
		} else if(cmd == "remove") {
			int num;
			cin >> num;
			
			if(isContain(s,num)) 
				s = s & ~(1 << num);
			else 
				continue;
			
		} else if(cmd == "check") {
			int num;
			cin >> num;
			
			printf("%d\n", (isContain(s,num) ? 1 : 0));
			
		} else if(cmd == "toggle") {
			int num;
			cin >> num;
			
			if(isContain(s,num))
				s = s & ~(1 << num);
			else
				s = s | (1 << num);
			
		} else if(cmd == "all") {
			s = (1 << 21) - 1;
		} else if(cmd == "empty") {
			s = 0;
		}
	}
	
}