#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int p;
		cin >> p;
		
		vector<pair<int,string> > a;
		int n;
		string human;
		for(int i = 0 ; i < p ; i++) {
			cin >> n >> human;
			a.push_back(make_pair(n,human));
		}
		sort(a.begin(),a.end());
		cout << a[p-1].second << endl;
	}
}