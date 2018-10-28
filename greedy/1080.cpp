#include <iostream>
#include <cstdio>
using namespace std;

int matrixA[51][51];
int matrixB[51][51];

	
int n,m;
int ans;

void flip(int row, int col) {
	for(int i = row ; i < row + 3; i++) {
		for(int j = col ; j < col + 3; j++) {
			if(matrixA[i][j] == 0)
				matrixA[i][j] = 1;
			else
				matrixA[i][j] = 0;
		}
	}
}

int main() {

	
	cin >> n >> m;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			scanf("%1d",&matrixA[i][j]);
		}
	}
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			scanf("%1d",&matrixB[i][j]);
		}
	}
	
	for(int i = 0 ; i < n -2; i++) {
		for(int j = 0 ; j < m -2 ; j++) {
			if(matrixA[i][j] != matrixB[i][j]) {
				flip(i,j);
				ans++;
			} 
		}
	}
	
	 for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(matrixA[i][j] != matrixB[i][j]) {
				cout << -1;
				return 0;
			}
				
		}
	}
	
	cout << ans;
	
	
}