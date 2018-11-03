#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, s;
	
	cin >> n >> s;
	
	int half = n / 2;
	
	vector<int> left(half);
	vector<int> right(n - half);
	
	for(int  i = 0 ; i < half ; i++) {
		cin >> left[i];
	}
	
	for(int i = 0 ; i < n - half ; i++) {
		cin >> right[i];
	}
	
	vector<int> leftSet;
	vector<int> rightSet;
	
	for(int i = 0 ; i < (1 << half) ; i++) {
		int sum = 0;
		for(int j = 0 ; j < half; j++) {
			if(i & (1 << j)) {
				sum += left[j];
			}
		}
		leftSet.push_back(sum);
	}
	
	for(int i = 0 ; i < (1 << n - half) ; i++) {
		int sum = 0;
		for(int j = 0 ; j < n - half; j++) {
			if(i & (1 << j)) {
				sum += right[j];
			}
		}
		rightSet.push_back(sum);
	}
	
	sort(leftSet.begin(), leftSet.end());
	sort(rightSet.begin(), rightSet.end());
	
	int leftsIndex = 0;
	int rightIndex = rightSet.size() - 1;
	
	long long ans = 0;
	
	while(leftsIndex < leftSet.size() && rightIndex >= 0) {
		
		int lValue = leftSet[leftsIndex];
		int rValue = rightSet[rightIndex];
		
		int sum = lValue + rValue;
		
		if(sum < s) {
			leftsIndex++;
		} else if(sum > s) {
			rightIndex--;
		} else {
			
			long long checkEquelNumLeft = 0;
			long long rightEquelNumRight = 0;
			
			while(leftsIndex < leftSet.size() && lValue == leftSet[leftsIndex]) {
				leftsIndex++;
				checkEquelNumLeft++;
			}
			
			while(rightIndex >= 0 && rValue == rightSet[rightIndex]) {
				rightIndex--;
				rightEquelNumRight++;
			}
			
			ans += checkEquelNumLeft * rightEquelNumRight;
		}
		
	}
	
	if(s == 0) {
		ans--;
	}
	
	cout << ans;
	
}
 