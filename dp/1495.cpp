#include <iostream>
using namespace std;

int volume[101];
bool dp[101][1001] = {false};

int main() {
	int n, s, m;
	
	cin >> n >> s >> m;
	for(int i = 1 ; i <= n ; i++) {
		cin >> volume[i];
	}
	
	if(s + volume[1] <= m)
		dp[1][s + volume[1]] = true;
	if(s - volume[1] >= 0)
		dp[1][s - volume[1]] = true;
	
	for(int i = 2 ; i <= n ; i++) {
		for(int j = 0 ; j <= m ; j++) {
			if(j + volume[i] <= m && dp[i-1][j] == true) {
				dp[i][j + volume[i]] = true;
			}
			if(j - volume[i] >= 0 && dp[i-1][j] == true) {
				dp[i][j - volume[i]] = true;
			}
		}
	}

	
    for(int i = m ; i >= 0 ; i--) {
        if(dp[n][i]) {
			cout << i;
			return 0;
		}
    }
    cout << -1 << endl;
	
}