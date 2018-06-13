#include <iostream>
#include <algorithm>
using namespace std;

// 점화식 
// d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0]

int d[1001][3];
int a[1001][3];

int main() {
	int num;
	cin >> num;
	
	for(int i=1 ; i <= num ; i++) {
		for(int j=0 ; j<3 ; j++) {
			cin >> a[i][j];
		}
	}
	
	d[1][0] = a[1][0];
	d[1][1] = a[1][1];
	d[1][2] = a[1][2];
	
	for(int i = 2 ; i<= num ; i++) {
		d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0];
		d[i][1] = min(d[i-1][0], d[i-1][2]) + a[i][1];
		d[i][2] = min(d[i-1][0], d[i-1][1]) + a[i][2];
	}
	
	cout << min(min(d[num][0],d[num][1]),d[num][2]) << endl;
	
}