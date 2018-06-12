#include <iostream>
using namespace std;

int dp[301][301];
int arr[301][301];

int main() {
	int col,row;
	cin >> col >> row;
	for(int i = 1 ; i <= col ; i++) {
		for(int j = 1 ; j <= row; j++) {
			cin >> arr[i][j];
		}
	}
	
	int t;
	cin >> t;

	while(t--) {
		int i,j,x,y;
		cin >> i >> j >> x >> y;
		int sum = 0;
		
		for(int k = i ; k <= x ; k++) {
			for(int l = j ; l <= y ; l++) {
				sum += arr[k][l];
			}
		}
		cout << sum << endl;
	}
}