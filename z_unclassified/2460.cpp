#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int a,b;
	int maxCurrent = 0 ;
	int sum = 0 ;
	for(int i = 0 ; i < 10 ; i++) {
		cin >> a >> b;
		sum += b-a;
		maxCurrent = max(maxCurrent, sum);
	}
	cout << maxCurrent;
	
}