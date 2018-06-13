// #include <iostream>
// #include <vector>
// using namespace std;

// long long dp[101] ={0};
// vector<long long> ans;

// void go(int i) {
//     if(dp[i] != 0)
//         return ;
    
//     dp[i] = dp[i-1] + dp[i-5];
// }

// int main() {
//     int t;
//     cin >> t;
    
//     dp[0] = 0;
//     dp[1] = 1;
//     dp[2] = 1;
//     dp[3] = 1;
//     dp[4] = 2;
    
//     while(t--) {
//         int num;
//         cin >> num;
        
//         for(int i = 5 ; i<=num ; i++) {
//             go(i);
//         }
//         // cout << dp[num] << endl;
//          ans.push_back(dp[num]);
//     }
    
//     for(int i = 0 ; i < ans.size() ; i++) {
//         cout << ans[i] << endl;
//     }
// }