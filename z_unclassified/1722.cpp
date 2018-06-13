#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int b[21];
long long d[21];
bool check[21];

int main() {
	int n;
	cin >> n;
	
	int k;
	cin >> k;
	
	
	d[0] = 1;
	for(int i = 1 ; i <= 20 ; i++) {
		d[i] = i * d[i-1];
	}
	
	int cnt = 1;
	if(k == 1) {
		long long pick;
		cin >> pick;

		vector<int> a(n);
		for(int i = 0 ; i < n ; i++) {
			for(int j = 1 ; j <= n ; j++) {
				if(check[j] == true)
					continue;
				if(d[n-i-1] < pick) {
					pick -= d[n-i-1];
				} else {
					a[i] = j;
					check[j] = true;
					break;
				}
			}
		}
		
		for(int i = 0 ; i < n ; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		
	} else if(k == 2) {
        
		for(int i = 0 ; i < n ; i++) {
			cin >> b[i];
		}
		
		long long ans = 0;
		for(int i = 0 ; i < n ; i++) {
			for(int j = 1 ; j < b[i] ; j++) {
				if(!check[j]) {
					ans += d[n-1-i];
				}
			}
			check[b[i]] = true;
		}
		
		cout << ans + 1;
	}
}