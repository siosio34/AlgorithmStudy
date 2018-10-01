#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int k,n;

bool isCorrect(vector<long long> &a, int len) {
	
	int sum = 0;
	
	for(int lansun : a) {
		sum += lansun / len;
	}
	
	return sum >= n;
	
}

int main() {
	
	cin >> k >> n;
	
	vector<long long> a(k);
	for(int i = 0 ; i < k ; i++) {
		cin >> a[i];
	}
	
	sort(a.begin(), a.end());
	
	long long l = 1;
	long long r = a[k-1];
	
	long long ans =0;
	
	while(l <= r) {
		long long mid = (l + r) / 2;
	
		if(isCorrect(a, mid)) {
			if(ans < mid) {
				ans = mid;
			}
			l = mid + 1;
		}

		else {
			r = mid -1;
		}
	}
	
	cout << ans;
	
}