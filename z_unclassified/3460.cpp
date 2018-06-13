#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--) {
		vector<int> a;
		int n;
		cin >> n;
		
		while(n > 0) {
			a.push_back(n % 2);
			n /= 2;
		}
		
		for(int i =0 ; i < a.size() ; i++) {
			if(a[i] > 0) {
				cout << i << " ";
			}
		}
		cout << endl;
 	}
	
}