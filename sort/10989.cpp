#include <iostream>
using namespace std;

int a[10001];

int main() {
	int n;
	cin >> n;
	
	int tmp;
	while(n--) {
		cin >> tmp;
		a[tmp]++;
	}
	
	for(int i = 1 ; i <= 10000 ; i++) {
		if(a[i] > 0) {
			for(int j = 0 ; j < a[i] ; j++) {
				cout << i << '\n';
			}
		}
	}
	
}