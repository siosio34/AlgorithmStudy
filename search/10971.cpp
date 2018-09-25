#include <iostream>
#include <algorithm>
using namespace std;

long long cost[11][11];
long long permutation[11];

int main() {
	
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		permutation[i] = i;
		for(int j = 0 ; j < n ; j++) {
			cin >> cost[i][j];
		}
	}
	
	long long ans = 987654321;
	do {
		long long sum = 0;
		bool isVisit = true;
		for(int i = 0 ; i < n -1 ; i++) {
			if(cost[permutation[i]][permutation[i+1]] > 0) 
			    sum += cost[permutation[i]][permutation[i+1]];
			else {
				isVisit = false;
				break;
			}
				
		}
		
		if(isVisit && cost[permutation[n-1]][permutation[0]] > 0) {
			sum += cost[permutation[n-1]][permutation[0]];
			if(ans > sum) {
				ans = sum;
			}
		}

	} while (next_permutation(permutation, permutation+n));
	
	cout << ans << endl;
	
}