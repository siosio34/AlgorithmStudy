#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n ;
	
	int maxInt = 0 ;
	int tmp;
	int sum = 0;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> tmp;
		sum += tmp;
	}
	cout << 1 + sum - n;;
}