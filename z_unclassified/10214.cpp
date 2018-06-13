#include <iostream>
using namespace std;

int a[2];
int main() {
	int n;
	cin >> n;
	
	while(n--) {
		a[0] = 0;
		a[1] = 0;
		int c,d;
		for(int i = 0 ; i < 9 ; i++) {
			cin >> c >> d;
			a[0]+= c;
			a[1] += d;
		}
		if(a[0] > a[1]) {
			cout << "Yonsei" << endl;
		} else if(a[0] < a[1]) {
			cout << "Korea" << endl;
		} else {
			cout << "Draw" << endl;
		}
	}
}