#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int p,m;
		cin >> p >> m;
		
		int cnt = 0 ;
		int a[501];
		memset(a,0,sizeof(a));
		
		int tmp;
		for(int i = 0 ; i < p ; i++) {
			cin >> tmp;
			if(a[tmp] > 0) {
				cnt++;
			}
			a[tmp]++;
		}
		cout << cnt << endl;
	}
}