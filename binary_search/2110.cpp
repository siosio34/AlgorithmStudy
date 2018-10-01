#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long a[200001];
int n,c;
long long ans;

bool isCorrect(vector<int> &a, int current) {
	int cnt = 1;
	int last = a[0];
	
	for(int house : a) {
		if(house - last >= current) {
			cnt += 1;
			last = house;
		}
	}
	
	return cnt >= c;
}

int main() {

	cin >> n >> c;
	
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	sort(a.begin(), a.end());
	
	int l = 1;
	int r = a[n-1] - a[0];
	
	while(l <= r) {
		
		int mid = (l + r) / 2; 
		if(isCorrect(a, mid)) {
			if(ans < mid) {
				ans = mid;
			}
			l = mid + 1;
		} else {
			r = mid -1;
		}
	}
	
	cout << ans;
	
}