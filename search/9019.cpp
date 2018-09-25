#include <iostream>
#include <queue>
#include <string>
using namespace std;

bool check[10001];
string how[10001];
int from[10001];
int dist[10001];

void print(int before, int after) {
	if(before == after) 
		return ;
	
	print(before, from[after]);
	cout<< how[after];
}
int main() {
	string order;
	
	int t;
	
	cin >> t;
	while(t--) {
		int before, after;
		cin >> before >> after;
		
		queue<int> q;
		
		for(int i = 0 ; i <= 10000 ; i++) {
			check[i] = false;
			dist[i] = 0;
			from[i] = 0;
		}
		
		check[before] = true;
		dist[before] = 0;
		q.push(before);
		
		while(!q.empty()) {
			int front = q.front();
			q.pop();
			
			int next = 2 * front % 10000;

			if(!check[next]) {
				q.push(next);
				check[next] = true;
				dist[next] = dist[front] + 1;
				from[next] = front;
				how[next] = 'D';
			}
			
			next = front == 0 ? 9999 : front - 1;

			if(!check[next]) {
				q.push(next);
				check[next] = true;
				dist[next] = dist[front] + 1;
				from[next] = front;
				how[next] = 'S'; 
			}
			
			next = front % 1000 * 10 + front / 1000;

			if(!check[next]) {
				q.push(next);
				check[next] = true;
				dist[next] = dist[front] + 1;
				from[next] = front;
				how[next] = 'L'; 
			}
			
			next = front % 10 * 1000 + front / 10;
			if(!check[next]) {
				q.push(next);
				check[next] = true;
				dist[next] = dist[front] + 1;
				from[next] = front;
				how[next] = 'R'; 
			}
		}
		
		print(before, after);
		cout << '\n';
		
	}
}