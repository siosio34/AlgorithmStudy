#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
using namespace std;

int dx[4] = { 0, 0, 1, -1};
int dy[4] = { 1, -1, 0, 0};

string dest = "123456789";
string start;

int answer = 987654321;

int main() {
	
	string input;
	for(int i = 0 ; i < 9 ; i++) {
		cin >> input;
		if(input == "0")
			input = "9";
		
		start += input;
	}
	
	queue<string> q;
	map<string, int> visited;
	q.push(start);
	visited[start] = 0;
	
	int cnt = 0;
	
	while(!q.empty()) {
		string now = q.front();
		// cout << "now" << now << " ";
		q.pop();
		
		if(now == dest) {
			cout << visited[dest];
			return 0;
		}
		
		int spot = now.find("9");
		int x = spot / 3;
		int y = spot % 3;
		
		for(int i = 0 ; i < 4 ; i++) {
			int nextX = x + dx[i];
			int nextY = y + dy[i];

			if(nextX >= 0 && nextX < 3 && nextY >= 0 && nextY < 3) {
				string next = now;
				swap(next[x * 3 + y], next[nextX * 3 + nextY]);

				if(visited.count(next) == 0) {
					visited[next] = visited[now] + 1;
					q.push(next);
				}
				
			}
		}
	}
	
	cout << -1; 

	
}