#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n,m,k;
	cin >> n >> m >> k;
	
	vector<int> v(n);
	
	if(m + k -1 <= n && n <= m*k) {
		for(int i = 0 ; i < n ; i++) {
			v[i] = i + 1;
		}
		
		vector<int> group;
		group.push_back(0);
		group.push_back(k);
		
		n -= k;
		m -= 1;
		
		int gs,r;
		if(m == 0) {
			gs = 1;
			r = 0;
		} else {
			gs = n /m;
			r = n % m;
		}
		
		for(int i = 0 ; i < m ; i++) {
			group.push_back(group.back() + gs + (r > 0 ? 1 : 0 ));
			if(r > 0) 
				r-=1;
		}
		
		for(int i = 0 ; i < group.size()-1 ; i++) {
			reverse(v.begin() + group[i], v.begin() + group[i+1]);
		}
		
		for(int i = 0 ; i < v.size() ; i++) {
			cout << v[i] << ' ';
		}
		
	} else{
		cout << -1;
	}
	return 0;
	
}