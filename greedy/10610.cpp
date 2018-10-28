#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int sum = 0;
	bool isZero = false;
	
	vector<int> v;
	
	while(n > 0) {
		
		int k = n % 10;
		sum += k;
		v.push_back(k);

		n /= 10;
	}
	
	sort(v.begin(), v.end());
	if(v[0] == 0 && sum % 3 == 0) {
		reverse(v.begin() , v.end());
		for(int i = 0 ; i < v.size() ; i++) {
			cout << v[i];
		}
	} else{
		cout << -1;
	}
	
}