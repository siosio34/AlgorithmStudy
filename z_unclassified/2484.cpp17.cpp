#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int tmp;
	
	cin >> n;
	int maxMoney = 0;
	int a[6] = {0,0,0,0,0,0};
	for(int i = 0 ; i < n ; i++) {
		
		int maxNum = 0;
		for(int i = 0 ; i < 6 ; i++) {
			a[i] = 0;
		}

		for(int j = 0 ; j < 4 ; j++) {
			cin >> tmp;
			a[tmp-1]++; 
			maxNum = max(maxNum,a[tmp-1]);
		}
		
		int sum = 0;
		if(maxNum == 4) {
			for(int i = 5 ; i >= 0 ; i--) {
				if(a[i] > 0) {
					sum = 50000 + (i+1) * 5000;
					break;
				}
			}
		} else if(maxNum == 3) {
			for(int i = 5 ; i >= 0 ; i--) {
				if(a[i] > 0) {
					sum = 10000 + (i+1) * 1000;
					break;
				}
			}
		} else if(maxNum == 2) {
			int checkTwiceDouble[2] = {-1,-1};
			int k = 0 ;
			for(int i = 5 ; i >= 0 ; i--) {
				if(a[i] == 2) {
					k++;
				}
			}
			if(k == 2) {
				sum += 2000;
				for(int i = 5 ; i >= 0 ; i--) {
					if(a[i] == 2) {
						sum += 500 * (i+1);
					}
				}
			} else {
				sum += 1000;
				for(int i = 5 ; i >= 0 ; i--) {
					if(a[i] == 2) {
						sum += 100 * (i+1);
					}
				}
			}
		} else if(maxNum == 1) {
			for(int i = 5 ; i >= 0 ; i--) {
				if(a[i] > 0) {
					sum = (i+1) * 100;
					break;
				}
			}	
		}
		maxMoney = max(sum,maxMoney);
	}
	cout << maxMoney;
}