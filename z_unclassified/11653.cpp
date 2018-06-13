#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int start = 2;
	
	if(n == 1) {
		return 0;
	}
	
	while(n != 1) {
		if(n % start == 0) {
			cout << start << "\n";
			n /= start;
		} else {
			start++;
		}
		
	}
}