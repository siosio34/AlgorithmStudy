#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool isVist[100001];
int dist[100001];

int main() {
	queue<int> position;
	
	int n;
	int k;
	
	cin >> n >> k;
	
	position.push(n);
	isVist[n] = true;
	
	while(!position.empty()) {
		int current = position.front();
		position.pop();
		
		if(current == k) {
			cout << dist[current] << endl;
			break;
		}

		if(current - 1 >= 0) {
			if(isVist[current-1] == false) {
				position.push(current-1);
				isVist[current-1] = true;
				dist[current-1] = dist[current] + 1;
			}
		}  
		if (current + 1 <= 100000) {
			if(isVist[current + 1] == false) {
				position.push(current + 1);
				isVist[current + 1] = true;
				dist[current + 1] = dist[current] + 1;
			}
		}  
		if(current * 2 <= 100000) {
			if(isVist[current * 2] == false) {
				position.push(current * 2);
				isVist[current * 2] = true;
				dist[current * 2] = dist[current] + 1;
			}
		}
	}
	
	return 0;
	
}