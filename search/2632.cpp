#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	
	int n;
	int pieceA, pieceB;
	
	cin >> n >> pieceA >> pieceB;
	
	vector<int> aPiza(pieceA);
	vector<int> bPiza(pieceB);
	
	int aSum = 0;
	int bSum = 0;
	
	for(int i = 0 ; i < pieceA ; i++) {
		scanf("%d",&aPiza[i]);
		aSum += aPiza[i];
	}
	
	for(int i = 0 ; i < pieceB ; i++) {
		scanf("%d",&bPiza[i]);
		bSum += bPiza[i];
	}
	
	vector<int> aVec;
	vector<int> bVec;
	aVec.push_back(0);
	aVec.push_back(aSum);
	bVec.push_back(0);
	bVec.push_back(bSum);
	
	for(int i = 1; i < pieceA ; i++) {
		for(int start = 0 ; start < pieceA ; start++) {
			int sum = 0;
			for(int k = 0 ; k < i ; k++) {
				int idx = start + k >= pieceA ? start + k - pieceA : start + k;
				sum += aPiza[idx];
			}
			aVec.push_back(sum);
		}
	}
	

	for(int i = 1; i < pieceB ; i++) {
		for(int start = 0 ; start < pieceB ; start++) {
			int sum = 0;
			for(int k = 0 ; k < i ; k++) {
				int idx = start + k >= pieceB ? start + k - pieceB : start + k;
				sum += bPiza[idx];		
			}

			bVec.push_back(sum);
		}
	}
	
	
	// 6 8 3 14 11 9 17
	
	
	sort(aVec.begin(), aVec.end());
	sort(bVec.begin(), bVec.end());
	reverse(bVec.begin(), bVec.end());

	
	long long ans = 0;
	
	int aIndex = 0;
	int bIndex = 0;
	while(aIndex < aVec.size() && bIndex < bVec.size()) {
		int aValue = aVec[aIndex];
		int bValue = bVec[bIndex];
		
		int sum = aValue + bValue;
		
		if(sum < n) {
			aIndex++;
		} else if(sum > n) {
			bIndex++;
		} else {
			long long checkEqualA = 1;
			long long checkEqualB = 1;
			
			aIndex++;
			bIndex++;
			
			while(aIndex < aVec.size() && aValue == aVec[aIndex]) {
				checkEqualA++;
				aIndex++;
			}
			
			while(bIndex < bVec.size() && bValue == bVec[bIndex]) {
				checkEqualB++;
				bIndex++;
			}
			
			ans += checkEqualA * checkEqualB;
		}
		
	}
	
	cout << ans;
	
	
	
	
	
	
	
}