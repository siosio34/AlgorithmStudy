#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int tmp;
	int a[8];
	
	int b[8];
	for(int i = 0 ; i < 8 ; i++) {
		cin >> tmp;
		a[i] = tmp;
		b[i] = tmp;
	}
	sort(a,a+8);
	
	int sum = 0 ;
	vector<int> ans;
	for(int i = 3 ; i < 8 ; i++) {
		sum += a[i];
		for(int j = 0 ; j< 8 ; j++) {
			if(b[j] == a[i]) {
				ans.push_back(j+1);
				break;
			}
		}
	}
	sort(ans.begin(),ans.end());
	cout << sum << endl;
	for(int i = 0 ; i< 5 ; i++) {
		cout << ans[i] << " ";
	}
	
}