#include <iostream>
using namespace std;

bool check[2002];

int main() {
	int n;
	cin >> n;
	
	int tmp;
	for(int i = 0 ; i < n ; i++) {
		cin >> tmp;
		check[tmp + 1000] = true;
	}
	
	for(int i = 0 ; i < 2002 ; i++) {
		if(check[i]) {
			cout << i - 1000 << " ";
		}
	}
}