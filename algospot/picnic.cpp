#include <iostream>
#include <cstring>
using namespace std;

bool areFriends[10][10];
int n;
int m;

int makePair(bool _isPairedStudent[10]) {
	int firstFree = -1;
	
	for(int i = 0 ; i < n ; i++) {
		if(!_isPairedStudent[i]) {
			firstFree = i;
			break;
		}
	}
	if(firstFree == -1)
		return 1;
	
	int ret = 0;
	for(int paired = firstFree+1 ; paired < n ; paired++) {
		if(!_isPairedStudent[paired] && areFriends[firstFree][paired]) {
			_isPairedStudent[firstFree] = _isPairedStudent[paired] = true;
			ret += makePair(_isPairedStudent);
			_isPairedStudent[firstFree] = _isPairedStudent[paired] = false;
		}
	}
	return ret;
}

int main() {
	int t;
	cin >> t;
	bool isPairedStudent[10];
	
	while(t--) {
		cin >> n;
		cin >> m;
		int a,b;
		
		for(int i = 0 ; i < 10 ; i++) {
			for(int j = 0 ; j < 10 ; j++) {
				areFriends[i][j] = false;
			}
		}
		memset(isPairedStudent,false,sizeof(isPairedStudent));
 
		for(int i = 0 ; i < m ; i++) {
			cin >> a >> b;
			areFriends[a][b] = true;
			areFriends[b][a] = true;
			
		}
		
		cout << makePair(isPairedStudent) << endl;
	}
}