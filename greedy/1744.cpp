#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int zeroNum = 0;
	int oneNum = 0;
	
	vector<int> plus;
	vector<int> minus;
	
	int tmp;
	for(int i = 0 ; i < n ; i ++) {
		cin >> tmp;
		
		if(tmp == 0) {
			zeroNum++;
		} else if(tmp == 1) {
			oneNum++;
		} else if(tmp > 0 && tmp != 1) {
			plus.push_back(tmp);
		} else if(tmp < 0) {
			minus.push_back(tmp);
		}
	}
	
	int sum = 0;
	
	if(minus.size() % 2 == 1) {
		minus.push_back(zeroNum > 0 ? 0 : 1);
	}
	
	if(plus.size() % 2 == 1) {
		plus.push_back(1);
	}
	
	sort(plus.begin(), plus.end());
	sort(minus.begin(), minus.end());
	
	for(int i = plus.size() - 2 ; i >=0  ; i -= 2) {
		sum += plus[i] * plus[i+1];
	}
	
	for(int i = 0; i < minus.size() ; i += 2) {
		sum += minus[i] * minus[i+1];
	}
	
	sum += oneNum;
	
	cout << sum;
	
}