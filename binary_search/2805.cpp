#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;

int ans;

bool isRequiredTree(vector<int> &v, int cutHeight) {
	
	long long sum = 0 ;
	for(int c : v) {
		if(cutHeight < c) {
			sum += c - cutHeight;
		}
	}
	
	return sum >= m;
}

int main() {
	cin >> n >> m;
	
	vector<int> v(n);
	
	for(int i = 0 ; i < n ; i++) {
		cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	
	long long left = 0;
	long long right = v[n-1];
	
	while(left <= right) {
		long long mid = (left + right) / 2;
		
		if(isRequiredTree(v, mid)) {
			if(ans < mid) {
				ans = mid;
			}	
			left = mid + 1;
		} else {
			right = mid -1;
		}
		
	}
	
	cout << ans;
	
}