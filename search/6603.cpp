#include <iostream>
#include <algorithm>
using namespace std;

int lottoNum[14];
int byteForPermitaion[14];

int main() {
	
	int n;
	
	while(cin >> n) {
		if(n == 0)
			return 0;
		
		for(int i = 0 ; i < n ; i++) {
			cin >> lottoNum[i];
		}
		
		for(int i = 0 ; i < 6 ; i++) {
			byteForPermitaion[i] = 1;
		}
		
		for(int i = 6 ; i < n - 6 ; i++) {
			byteForPermitaion[i] = 0;
		}
		
		do {
			
			for(int i = 0 ; i < n ; i++) {
				if(byteForPermitaion[i] == 1) {
					cout << lottoNum[i] << " ";
				}
			}
			
			cout << '\n';
			
		} while(prev_permutation(byteForPermitaion, byteForPermitaion + n));
		
		cout << '\n';
	}
	
}