#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool prime[4000001];

int main() {
	int n;
	cin >> n;
	
	vector<int> prineVector;
	

	for(int i = 2 ; i <= n ; i++) {
		prime[i] = true;
	}
	
	for(int i =2 ; i <= sqrt(n) ; i++) {
		
		if(prime[i]) {
			for(int j = i+i; j <= n ; j += i) {
				prime[j] = false;
			}
		}
	}
	
	for(int i = 2 ; i <= n ; i++) {
		if(prime[i])
			prineVector.push_back(i);
	}
	
	int left = 0;
	int right = 0;
	
	int sum = prineVector.size() > 0 ? prineVector[0] : 0;
	
	int ans = 0;
	
	while(left <= right && right < prineVector.size()) {
		
		if(sum < n) {
			right++;
			sum += prineVector[right];
		} else if(sum > n) {
			sum -= prineVector[left];
			left++;
		} else {
			ans++;
			right++;
			sum += prineVector[right];
		}
	}
	
	cout << ans;
	

}