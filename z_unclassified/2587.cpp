#include <iostream>
#include <algorithm>
using namespace std;

int a[5];
int main() {
	int n;

	
	int sum = 0; 
	int tmp;
	
	for(int i = 0 ; i < 5 ; i++) {
		cin >> tmp;
		a[i] = tmp;
		sum += tmp;
	}
	
	sort(a,a+5);
	
	cout << sum / 5 << endl;
	cout << a[2];
	
	
}