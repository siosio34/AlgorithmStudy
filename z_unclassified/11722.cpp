#include <iostream>
using namespace std;

int dp[1001];
int a[1001];

int max_len = 1;
int main() {
    int num;
    cin >> num;
	
    for(int i = 1 ; i<= num ; i ++) {
        cin >> a[i];
		dp[i] = 1;
    }
    
    for(int i =1 ; i<= num ; i++) {
        
        for(int j = 1; j < i ; j++) {
            if(a[i] < a[j] && dp[j] >= dp[i]) {
                dp[i] = dp[j] + 1;
                if(max_len < dp[i])
                    max_len = dp[i];
            }
        }
    }
    
    cout << max_len << endl;
}