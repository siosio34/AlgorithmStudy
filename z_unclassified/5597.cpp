#include <iostream>
using namespace std;

bool check[31];
int main() {
	
	int tmp;
	for(int i = 1 ; i <= 28 ; i++) {
		cin >> tmp;
		check[tmp] = true;
	}
	
	for(int i = 1 ; i <= 30 ; i++) {
		if(!check[i]) {
			cout << i << endl;
		}
	}
}