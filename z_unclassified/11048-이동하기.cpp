#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1001][1001];
int distan[1001][1001];

int main() {
	int col, row;
	int temp;

	cin >> col >> row;
	for (int i = 1; i <= col; i++) {
		for (int j = 1; j <= row; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= col; i++) {
		for (int j = 1; j <= row; j++) {
			distan[i][j] = max( max( distan[i - 1][j - 1],distan[i - 1][j]),distan[i][j - 1] ) + arr[i][j];
		}
	}
	cout << distan[col][row];
	
}