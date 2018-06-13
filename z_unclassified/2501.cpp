#include <iostream>
#include <vector>
using namespace std;


int main() {
	vector<int> a;
	
	int n,k;
	cin >> n >> k;
	
	for(int i = 1 ; i <= n ; i ++) {
		if(n%i == 0) {
			a.push_back(i);
		}
	}
	
	if(a.size() < k ) {
		cout << 0 << endl;
	} else {
		cout << a[k-1];
	}
}