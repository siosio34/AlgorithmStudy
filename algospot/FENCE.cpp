#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// TIME ERROR
// int solve(const vector<int>& height) {
// 	int ret = 0;
// 	for(int left = 0 ; left < height.size() ; left++) {
// 		int minHeight = height[left];
// 		for(int right = left ; right < height.size() ; right++) {
// 			minHeight = min(minHeight, height[right]);
// 			ret = max(ret, minHeight * (right-left+1));
// 		}
// 	}
// 	return ret;
// }

int solve(int left, int right) {
	
}

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		vector<int> height(n,0);
		for(int i = 0 ; i < n ; i++) {
			cin >> height[i];
		// }
		// cout << solve(height) << endl;
	}
}