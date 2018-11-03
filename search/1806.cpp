#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,s;
	cin >> n >> s;
	
	vector<int> v(n);
	
	for(int i = 0 ; i < n ; i++) {
		cin >> v[i];
	}
	
	int left = 0;
	int right = 0;
	
	int sum = v[0];
	int answer = 2147483647;
	while(left < n && right < n) {
		
		if(sum == s) {
			right += 1;
			sum += v[right];
			answer = min(answer, abs(right-left) + 1);
		} else if(sum < s) {
			right += 1;
			sum += v[right];
		} else if(sum > s) {
			answer = min(answer, abs(right-left) + 1);
			sum -= v[left];
			left += 1;
		}
	}
	
	if(answer == 2147483647) {
		cout << 0;
	} else {
		cout << answer;
	}

	
}