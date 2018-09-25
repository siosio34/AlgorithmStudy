#include <iostream>
using namespace std;


int dfs(int current,int  n) {
	if(current > n) {
		return 0;	
	}
	
	if(current == n) {
		return 1;
	}
	
	int s = 0;
	for(int i = 1;  i <=3 ; i++) {
		s += dfs(current + i, n);
	}
	return s;
}

int main() {
	int n;
	int t;
	cin >> t;
	
	while(t--) {
		cin >> n;
		cout << dfs(0, n) << endl;
	}
	
}