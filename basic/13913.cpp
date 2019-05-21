#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int visited[200001];
int parent[200001];
int dist[200001];

int n,k;

int main() {
	cin >> n >> k;
	
	visited[n] = true;
	dist[n] = 0;
	parent[n] = -1;
	
	queue<int> q;
	q.push(n);
	
	while(!q.empty()) {
		int now = q.front();
		q.pop();
		
		cout <<"$" << now << " "; 
		
		if(now == k) {
			cout << dist[k] << endl;
			
			vector<int> answer;
			for(int track = k ; track != -1 ; track = parent[track]) {
				answer.push_back(track);
			}
			
			for(int i=(int)answer.size()-1; i>=0; i--){
                cout << answer[i] << " ";
            }
			
			return 0;
		}
		
		if(now+1 <= k && !visited[now+1]){
			q.push(now+1);
           	dist[now + 1] = dist[now] + 1;
            visited[now+1] = true;
            parent[now+1] = now;
        }
        
        if(now-1 >= 0 && !visited[now-1]){
            q.push(now-1);
           	dist[now - 1] = dist[now] + 1;
            visited[now-1] = true;
            parent[now-1] = now;
        }
        
        if(now*2 < 2*k && !visited[now*2]){
            q.push(now * 2);
           	dist[now * 2] = dist[now] + 1;
            visited[now*2] = true;
            parent[now*2] = now;
        }
	}
}