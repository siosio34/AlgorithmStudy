#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	
	int left = 0;
	int right = 0;
	
	vector<int> v(n);
	
	for(int i = 0 ; i < n ; i++) {
		cin >> v[i];
	}
	
	int sum = v[0];
	int answer = 0;
	
	while(left <= right && right < n) {
		if(sum == m) {
			
		} else if(sum < m) {
			
		} else if(sum > m) {
			
		}
	}
	
	
	
	
}