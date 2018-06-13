#include <iostream>
using namespace std;

int a[11];
int main() {
	int t;
	cin >> t;
	
	string tmp;

	while(t--) {
		cin >> tmp;
		for(int i = 0 ; i < 10 ; i++) {
			a[i] = 0;
		}
		for(int i = 0 ; i < tmp.size(); i++) {
			a[(int)(tmp[i] - '0')]++;
		}
		
		int cnt = 0;
		for(int i = 0 ; i < 10 ; i++) {
			if(a[i] > 0) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}