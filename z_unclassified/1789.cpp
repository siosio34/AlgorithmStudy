#include <iostream>
using namespace std;

int main() {
	long long int s;
	cin >> s;
	
	long long int cnt = 0 ;
	int k = 0;
	while(cnt <= s) {
		cnt += k+1;
		k++;
	}
	cout << k-1 << endl;
}