#include <iostream>
using namespace std;

int a[2];
int main() {
	
	
	int n;
	cin >> n;
	
	int k;
	for(int i =0 ; i < n ; i++) {
		cin >> k;
		k == 1 ? a[0]++ : a[1]++;
	}
	
	cout << (a[0] < a[1] ? "Junhee is not cute!": "Junhee is cute!") << endl;
}