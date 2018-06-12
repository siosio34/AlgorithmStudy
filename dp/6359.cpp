#include <iostream>
#include <cstring>
using namespace std;

bool check[101];

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		memset(check,false,sizeof(check));
		
		for(int i =1 ; i <= n ; i++ ) { // 라운드수
			for(int j = 0; j <= 100 ; j += i) {
				check[j] = !check[j];
			}
		}
		int sum = 0;
		
		for(int i = 1 ; i <= n ; i++) {
			if(check[i]) {
				sum++;
			}
		}
		cout << sum << endl;
	}
}