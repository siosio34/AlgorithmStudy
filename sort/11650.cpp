#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	scanf("%d",&n);
	vector<pair<int,int> > a(n);
	for(int i = 0 ; i < n ; i++) {
		scanf("%d%d",&a[i].first,&a[i].second);
	}
	sort(a.begin(), a.end());
	for(auto &p : a) {
		printf("%d %d\n",p.first,p.second);
	}
	return 0;

}