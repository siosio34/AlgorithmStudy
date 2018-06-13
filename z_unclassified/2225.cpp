#include <iostream>
using namespace std;

long long d[201][201];
long long mod = 1000000000;

long long solve(int n,int k) {
	if(n == 0 && k == 1)
		return 1;
	
	if(d[n][k] > 0)
		return d[n][k];
	
	for(int i = 1 ;i <= n ; i++) {
		d[n][k] += solve(n-i,k-1);
		d[n][k] %= mod;
	}
	
	return d[n][k];
}
int main() {
	int n,k;
	cin >> n >> k;
	
	solve(n,k);
	cout << d[n][k] + 1 << endl;
}