#include <iostream>
#include <algorithm>
using namespace std;

int d[100001];

int main() {
	int num;
	
	cin >> num;
	
	for(int i = 1 ; i <= num ; i++) {
		d[i] = i;
	}
	
	for(int i = 1 ; i*i <= num ; i++) {
		d[i*i] = 1;
	}
	
	for(int i = 2; i <= num ; i++) {
		for(int j = 2 ; j*j <= i ; j++) {
			d[i] = min(d[i], d[i-j*j] + 1);
		}
	
	}
	
	cout << d[num] << endl;
	
}