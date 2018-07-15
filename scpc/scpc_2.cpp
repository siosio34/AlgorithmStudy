#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int Answer;
vector<int> pelinNum;
int dp[10001];

bool isPelindrom(int num) {
	string tmp = to_string(num);
	if(tmp.size() != 1) {
		for(int i = 0 ; i < tmp.size() ; i++) {
			if(tmp[i] != tmp[tmp.size()-1 - i])
				return false;
		}
	} else {
		return true;
	}
	return true;
	
}
int main(int argc, char** argv)
{
	int T, test_case;
	cin >> T;
	
	string tmp;
	int len = 0;
	
	for(int i = 1 ; i <= 10000 ; i++) {
		dp[i] = 10000;
		if(isPelindrom(i) == true) {
			pelinNum.push_back(i);
			dp[i] = 1;
		}
	}
	
	dp[0] = 1;
	for(int i= 0 ; i < pelinNum.size() ; i++) {
		for(int j = 1 ; j <= 10000 ; j++) {
			if(j >= pelinNum[i] && dp[j-pelinNum[i]] > 0) {
				dp[j] = min(dp[j-pelinNum[i]] + 1, dp[j]);
			}
		}
	}
	
	for(int i = 1 ; i <= 10000 ; i++) {
		if(dp[i] == 10000)
			cout << i << " ";
	}

	for(test_case = 0; test_case  < T; test_case++) {
		int n;
		cin >> n;
		int start = pelinNum.size() - 1;
		cout << "Case #" << test_case+1 << endl;
		if(dp[n] == 0 || dp[n] > 3) {
			cout << 0;
		} else {
			cout << dp[n];
			if(dp[n] == 1) {
				cout << " " << n;
			} else {
				while(n != 0) {
					if(n >= pelinNum[start] && dp[n - pelinNum[start]] > 0) {
						cout << " " << pelinNum[start];
						n -= pelinNum[start];
					} else {
						start--;
					}
				}
			}
		}
		cout << endl;
	}
		
	return 0;
}