#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum =0 ;
	int a,b;
	for(int i = 0 ; i < n ; i++) {
		cin >> a >> b;
		sum += b % a;
	}
	cout << sum;
}