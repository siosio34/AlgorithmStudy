#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	int m;
	cin >> n >> m;
	
	if(stoi(n) * n.size() > m ) {
		while(n.size() <= m) {
		cout << n;
		m -= n.size();
	}

	for(int i = 0 ; i < m ; i++) {
		cout << n[i];
	}
		
	} else {
		for(int i = 0 ; i < stoi(n) ; i++) {
			cout << n;
		}
	}
	
	
		
}