#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		
		int sum = 0 ;
		float gpa = 0.0;
		
		float a;
		float b;
		for(int i = 0 ; i < n ; i++) {
			cin >> a >> b;
			sum += a;
			gpa += (a * b);
		}
		
		printf("%d %0.1f\n",sum , gpa / sum);
	}
}