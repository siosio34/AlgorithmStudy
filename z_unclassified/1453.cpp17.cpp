#include <iostream>
using namespace std;

int a[101];
int main() {
	int n;
	cin >> n;
	
	int rejectNum = 0;
	int tmp;
	for(int i = 0 ; i < n ; i++ ) {
		cin >> tmp;
		if(a[tmp] == 0) {
			a[tmp]++;
		} else {
			rejectNum++;
		}
	}
	cout << rejectNum;
}