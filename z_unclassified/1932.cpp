#include <iostream>
#include <algorithm>
using namespace std;

int floor = 1;
int cnt = 0;

int main() {
    int num;
    cin >> num;
    
    for(int i=1 ; i<= num ; i++) {
        for(int j=0 ; j<floor ; j++) {
            cnt+=1;
        }
        floor+=1;
    }
    
    int *dp = new int[cnt+1];
    int *a = new int[cnt+1];
    
    for(int i=1 ; i<= cnt ; i++) {
        cin >> a[i];
    }
    
    dp[0] = 0;
    dp[1] = a[1];
    dp[2] = a[1] + a[2];
    dp[3] = a[1] + a[3];
    
    floor = 1;
    cnt = 1;
    
    for(int i =2 ; i <= num ;i++) {
        for(int j=0 ; j <i ; j++) {
            cnt++;
            if(j==0) {
                dp[cnt] = dp[cnt-floor] + a[cnt];
            }
            else if(j == i-1) {
                dp[cnt] = dp[cnt-floor-1] + a[cnt];
            }
            else {
                dp[cnt] = max(dp[cnt-floor], dp[cnt-floor-1]) + a[cnt];
            }
        }
        floor++;
    }
    
    int max_num = -1;
    for(int i=0; i<num ; i++) {
        if(dp[cnt] > max_num) {
            max_num = dp[cnt];
        }
        cnt--;
    }
    cout << max_num << endl;
}