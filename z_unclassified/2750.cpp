#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	int tmp;
	vector<int> a;
	
	for(int i =0 ; i < t; i ++) {
		cin>>tmp;
		a.push_back(tmp);
	}
	
	sort(a.begin(),a.end());
	
	for(int i = 0 ; i < t ; i ++) {
		cout << a[i] << "\n";
	}
}