#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
int main() {
	int n;
	int tmp;
	while(cin >> n) {
		if(n == -1)
			break;
		
		tmp = n ;
		a.clear();
		
		for(int i =1 ; i < n ; i++) {
			if(tmp % i == 0) {
				a.push_back(i);
			}
		}
		
		int cnt = 0;
		for(int i = 0 ; i< a.size() ; i++) {
			cnt += a[i];
		}
		
		if(cnt == tmp) {
			cout << tmp << " = ";
			for(int i = 0 ; i < a.size() ; i++) {
				if(i != a.size() -1)
					cout << a[i] << " + ";
				else
					cout << a[i] << endl;
			}
		} else {
			cout << tmp << " is NOT perfect." << endl;
		}

	}
}