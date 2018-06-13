#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int s;
		int n;
		cin >> s >> n;
		
		int sum = s;
		for(int i = 0 ; i < n ; i++) {
			int q ,p;
			cin >> q >> p;
			
			sum += q * p;
		}
		cout << sum << endl;
	}
}