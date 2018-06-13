#include <iostream>
#include <vector>
using namespace std;

vector<int> ans;


int main() {
	int t;
	cin >> t;
	while(t--){
		int num;
		cin >> num;
		int cnt = 1;
		int n = 0;
		bool dp[101] = {false};
		
		for(int i = 1 ; i <= num ; i++) {
			for(int j = 1 ; j <= num / cnt ; j++){
				dp[cnt*j] = !dp[cnt*j];
			}
			cnt++;
		}
	
		for(int i = 1 ; i <= num ; i++) {
			if(dp[i]) n++;
		}
		ans.push_back(n);
	}

	for(int i=0 ; i<ans.size() ; i++) {
		cout << ans[i] << endl;
	}
	
}