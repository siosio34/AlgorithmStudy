#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);
	vector<int> d(n);
	
	for(int i = 0 ; i < n ; i++) {
		scanf("%d", &a[i]);
		scanf("%d", &b[i]);
		scanf("%d", &c[i]);
		scanf("%d", &d[i]);
	}
	
	vector<int> left;
	vector<int> right;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			left.push_back(a[i] + b[j]);
			right.push_back(c[i] + d[j]);
		}
	}
	
	sort(right.begin(), right.end());
	
	long long ans = 0;
	for(int val : left) {
		auto equalRange = equal_range(right.begin(), right.end(), -val);
		ans += equalRange.second - equalRange.first;
	}
	
	cout << ans;
	
	
}