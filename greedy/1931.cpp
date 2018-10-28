#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int start, end;
	
	vector<pair<int,int> > meetings;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> start >> end;
		meetings.push_back(make_pair(end,start));
	}
	
	sort(meetings.begin(), meetings.end());
	int ans = 0;
	
	int endTime = 0;

	for(int i = 0 ; i < meetings.size() ; i++) {
		
		if(endTime <= meetings[i].second) {
			endTime = meetings[i].first;
			ans += 1;
		}

	}
	
	cout << ans;
	
}