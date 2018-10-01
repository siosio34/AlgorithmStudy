#include <queue>
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	priority_queue<int, std::vector<int>, std::greater<int> > pq;
	
	int n;
	scanf("%d", &n);
	
	int select;
	while(n--) {
		scanf("%d", &select);
		if(select == 0) {
			
			if(pq.empty()) {
				printf("%d\n", 0);
			} else {
				printf("%d\n", pq.top());
				pq.pop();
			}
		} else {
			pq.push(select);
		}
	}
	
}