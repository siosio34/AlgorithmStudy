#include <iostream>
using namespace std;

int a[101][101];
int b[101][101];

int main() {
	int n,m;
	cin >> n >> m;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
		}
	}
	
	int l,k;
	cin >> l >> k;
	
	for(int i = 0 ; i < l ; i++) {
		for(int j = 0 ; j < k ; j++) {
			cin >> b[i][j];
		}
	}
	
	for(int i = 0 ; i < n ; i++) {
		for(int j =0 ; j < k; j++) {
			int sum = 0 ;
			for(int iter = 0 ; iter < m ; iter++) {
				sum += a[i][iter] * b[iter][j];
			}
			cout << sum << " ";
		}
		cout << endl;
	}
}