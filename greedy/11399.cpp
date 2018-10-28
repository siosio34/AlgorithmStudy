#include <iostream>
#include <queue>
using namespace std;

int waitTime[1001];

int main() {
	int n;
	
	cin >> n;
	
	priority_queue<int, std::vector<int>, std::greater<int> > pq;
	
	int tmp;

	for(int i = 0 ; i < n ; i++) {
		cin >> tmp;
		pq.push(tmp);
	}
	
	int sum = 0;
	int ans = 0;
	

	
	while(!pq.empty()) {
		sum += pq.top();
		ans += sum;
		pq.pop();
	}
	
	cout << ans;
}