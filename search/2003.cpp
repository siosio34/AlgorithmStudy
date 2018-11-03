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
	
	while(left < n && right < n) {
		if(sum == m) {
			right += 1;
			sum += v[right];
			answer += 1;
		} else if(sum < m) {
			right += 1;
			sum += v[right];
		} else if(sum > m) {
			sum -= v[left];
			left += 1;
		}
	}
	
	cout << answer;
	
	
}