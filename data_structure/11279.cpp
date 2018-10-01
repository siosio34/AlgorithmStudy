#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int main() {
	
	priority_queue<int> pq;
	
	int n;
	cin >> n;
	
	int select;
	for(int i = 0 ; i < n ; i++) {
		scanf("%d", &select);
		cin >> select;
		if(select == 0) {
			if(pq.empty()) {
				printf("%d\n", 0);

			} else {
				printf("%d\n", pq.top());
				pq.pop();
			}
		} else{
			pq.push(select);
		}
	}
	
	
}