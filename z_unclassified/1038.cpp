#include <iostream>
#include <cmath>
using namespace std;

long long d[10][10];
long long n;
long long ans;
long long cnt;

void dfsGetNumber(long long start, long long digit, long long current)
{
	if(digit == 1) {
		++cnt;
		if(cnt == n) {
			ans = current;
			return ;
		}
	}
	else {
		for(long long i = digit - 2 ; i<start ; i++) {
			dfsGetNumber(i,digit-1,current + i * pow(10,digit-2));
		}
	}
}

int main() {

	cin >> n;
	
	if(n > 1022) {
		cout << -1 ;
		return 0;
	}
	
	long long i = 0;
	for(long long i = 0 ; i <= 9 ; i++) {
		d[i][1] = 1;
	}

	for(long long i = 2 ; i < 10 ; i++) {
		for(long long j = 1 ; j < 10 ; j++) {
			for(long long k = 0 ; k < j ; k++) {
				d[j][i] += d[k][i-1];
			}
		}
	}
	
	// i 자릿수
	// j 0~9
	long long sum = 0 ;
	for(long long i = 1 ; i < 10 ; i++) {
		for(long long j = 1 ; j < 10 ; j++) {
			if(sum + d[j][i] >=n ) {
				cnt = sum;
				dfsGetNumber(j, i, j * pow(10,i-1));
				cout << ans;
				return 0;
			} 
			sum += d[j][i];
		}
	}
	cout << 9876543210;
}