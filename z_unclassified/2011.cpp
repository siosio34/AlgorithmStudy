#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int dp[5001];
vector<long long int> a;

int main() {
	int num;
	cin >> num;
	
	if(num == 0) {
		cout << "0" << endl;
	}
	
	else {
		while(num > 0) {
		a.push_back(num % 10);
		num /= 10;
	}
	
	reverse(a.begin(), a.end());
	
	dp[0] = 1;
		
	int temp = 10 * a[0] + a[1];
	if(temp % 10 == 0 && temp > 26)
		dp[1] = 0;
		
	else if(temp % 10 == 0 && temp > 0 && temp <=26)
		dp[1] = 1;
	
	else if(temp > 26) {
		dp[1] = 1;
	}
	else if(temp >0 && temp < 10) {
		dp[1] = 1;
	}
	else if(temp % 10 != 0 && temp > 0 && temp <=26 )
		dp[1] = 2;
	
		// 10 20 30 40 50 60 안됨
		
	for(int i=2 ; i<a.size() ; i++) {
		
		if (a[i] > 0 && a[i] <= 9)
			dp[i] = dp[i - 1];

		if (a[i - 1] == 1 || a[i - 1] == 2 && a[i] >= 0 && a[i] <= 6)
			dp[i] += dp[i - 2];
		
		dp[i] %= 1000000;
	}
		
	cout << dp[a.size() -1] << endl;
	}
	
	
}