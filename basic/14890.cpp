#include <iostream>
using namespace std;

int area[101][101];

int main() {
	int n, l;
	
	cin >> n >> l;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cin >> area[i][j];
		}
	}
	
	// width
	int ans = 0;
	for(int i = 0 ; i < n ; i++) {
		
		bool isRoad = true;
		
		int checkLen = 1;
		
		for(int j = 0 ; j < n-1 ; j++) {
			if(area[i][j] + 1 == area[i][j+1] && checkLen >= l ) { // 오르막
				checkLen = 1;
			} else if(area[i][j] == area[i][j+1]) { // 평지
				checkLen = checkLen + 1;
			} else if(area[i][j] -1 == area[i][j+1] && checkLen >= 0 ){	// 내리막
				checkLen = -l + 1;
			} else { // 노답일경우
				isRoad = false;
				break;
			}
		}
		
		if(isRoad && checkLen >= 0) {
			ans = ans + 1;
		}
	}
	
	for(int i = 0 ; i < n ; i++) {
		
		bool isRoad = true;
		
		int checkLen = 1;
		
		for(int j = 0 ; j < n-1 ; j++) {
			if(area[j][i] + 1 == area[j+1][i] && checkLen >= l ) { // 오르막
				checkLen = 1;
			} else if(area[j][i] == area[j+1][i]) { // 평지
				checkLen = checkLen + 1;
			} else if(area[j][i] -1 == area[j+1][i] && checkLen >= 0 ){	// 내리막
				checkLen = -l + 1;
			} else { // 노답일경우
				isRoad = false;
				break;
			}
		}
		
		if(isRoad && checkLen >= 0) {
			ans = ans + 1;
		}
	}
	
	cout << ans;
}
 