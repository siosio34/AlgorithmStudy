#include <iostream>
#include <queue>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int from[10001];
int dist[10001];
int how[10001];
int check[10001];
int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int a;
		int b;
		cin >> a >> b;
		queue<int> q;
		
		memset(from,0,sizeof(from));
		memset(dist,0,sizeof(from));
		memset(how,0,sizeof(from));
		memset(check,false,sizeof(from));

		q.push(a);
		
		while(!q.empty()) {
			int now = q.front();
			q.pop();
			
			int next = (now * 2) % 10000;
			if(check[next] == false) {
				check[next] = true;
				from[next] = now;
				how[next] = 'D';
				q.push(next);
			}
			
			next = now -1;
			if(next == -1) next = 9999;
			if(check[next] == false) {
				check[next] = true;
				from[next] = now;
				how[next] = 'S';
				q.push(next);
			}
			
			next = (now % 1000) * 10 + now / 1000;
			if(check[next] == false) {
				check[next] = true;
				from[next] = now;
				how[next] = 'L';
				q.push(next);
			}
			
			next = (now / 10) + (now % 10) * 1000;
			if(check[next] == false) {
				check[next] = true;
				from[next] = now;
				how[next] = 'R';
				q.push(next);
			}
		}
		
		string ans;
		while(a != b) {
			ans += how[b];
			b = from[b];
		}
		reverse(ans.begin(),ans.end());
		cout << ans <<endl;
	}
	
	
}