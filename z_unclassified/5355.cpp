#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <stdio.h>
using namespace std;

char a[101];
int main() {
	int t;
	cin >> t;
	cin.ignore();
	float d;
	while(t--) {
		cin >> d;
		cin.ignore();
		cin.getline(a,100);
		
		for(int i = 0 ; i < strlen(a) ; i++) {
			if(a[i] == '@') {
				d *= 3;
			} else if(a[i] == '%') {
				d += 5;
			} else if(a[i] == '#') {
				d -= 7;
			}
		}

		printf("%0.2f\n",d);
	}
}