#include <iostream>
using namespace std;

long long dp[1001];
long long a[1001];


int main() {
    int num;
    cin >> num;
	
    for(int i = 1 ; i<= num ; i ++) {
        cin >> a[i];
        dp[i] = a[i];
    }
    
    long long max_len = dp[1];

    
    for(int i =1 ; i<= num ; i++) {
        for(int j = 1; j < i ; j++) {
            if(a[i] > a[j] && dp[j] + a[i] >= dp[i]) {
                dp[i] = dp[j] + a[i];
                if(max_len < dp[i])
                    max_len = dp[i];
            }
        }
    }
    
    cout << max_len << endl;
}