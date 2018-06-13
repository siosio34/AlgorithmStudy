#include <iostream>
using namespace std;

int check[1001];

int main() {
	
	int tmp;
	for(int i = 0 ; i< 10 ;i++) {
		cin >> tmp;
		check[tmp % 42]++;
	}
	
	int cnt = 0 ;
	for(int i = 0 ; i < 42 ; i++) {
		if(check[i] > 0) {
			cnt++;
		}
	}
	
	cout << cnt;
}