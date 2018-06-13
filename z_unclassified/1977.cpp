#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int m,n;
	cin >> m >> n;
	
	int minsqrt = sqrt(m);
	
	minsqrt = minsqrt * minsqrt < m ? minsqrt + 1 : minsqrt;
	double maxsqrt = sqrt(n);
	
	int sum = 0 ;
	int minNum = 0;
	
	for(int i = minsqrt ; i<= maxsqrt ; i++) {
		sum += i * i;
		if(minNum == 0) {
			minNum = i * i;
		}
	}
	if(sum ==0) {
		cout << -1 << endl;
	} else {
			cout << sum << endl;
	cout << minNum ;
	}
	

}