#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	int n;
	cin >> n;
	
	vector<int> nVec(n+1);
	
	int nSum = 0;
	int mSum = 0;
	for(int i = 0 ; i < n ; i++) {
		cin >> nVec[i];
		nSum += nVec[i];
	}
	
	int m;
	cin >> m;
	
	vector<int> mVec(m+1);
	
	for(int i = 0 ; i < m ; i++) {
		cin >> mVec[i];
		mSum += mVec[i];
	}
	
	// 연속된거 합 구해야한다.
	
	vector<int> sumA;
	vector<int> sumB;
	
	sumA.push_back(nSum);
	sumB.push_back(mSum);
	
	for(int len = 1 ; len < n ; len++) {
		for(int start = 0 ; start <= n ; start++) {
			int sum = 0;
			
			if(start + len > n) {
				break;
			} else {
				for(int k = 0 ; k < len ; k++) {
					sum += nVec[start + k];
				}
				sumA.push_back(sum);
			}
		}
	}
	
	for(int len = 1 ; len < m ; len++) {
		for(int start = 0 ; start < m ; start++) {
			int sum = 0;
			
			if(start + len > m) {
				break;
			} else {
				for(int k = 0 ; k < len ; k++) {
					sum += mVec[start + k];
				}
				sumB.push_back(sum);
			}
		}
	}
		
	sort(sumA.begin(), sumA.end());
	sort(sumB.begin(), sumB.end());
	reverse(sumB.begin(), sumB.end());
	
	long long ans = 0;
	
	int aIndex = 0;
	int bIndex = 0;
	
	while(aIndex < sumA.size() && bIndex < sumB.size()) {
		int aValue = sumA[aIndex];
		int bValue = sumB[bIndex];
		
		int sum = aValue + bValue;
		
		if(sum < t) {
			aIndex++;
		} else if(sum > t) {
			bIndex++;
		} else {
			long long checkEqualA = 1;
			long long checkEqualB = 1;
			
			aIndex++;
			bIndex++;
			
			while(aIndex < sumA.size() && aValue == sumA[aIndex]) {
				checkEqualA++;
				aIndex++;
			}
			
			while(bIndex < sumB.size() && bValue == sumB[bIndex]) {
				checkEqualB++;
				bIndex++;
			}
			
			ans += checkEqualA * checkEqualB;
		}
		
	}
	
	
	cout << ans;
	
}