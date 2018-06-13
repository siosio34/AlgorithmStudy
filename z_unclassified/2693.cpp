#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	
	int tmp;
	while(n--) {
		int a[10];
		for(int i = 0 ; i <10 ; i++) {
			cin >> tmp;
			a[i] = tmp;
		} 
		sort(a,a+10);
		cout << a[7] << endl;
	}
}