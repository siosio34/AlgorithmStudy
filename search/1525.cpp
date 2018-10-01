#include <iostream>
#include <queue>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int main() {

	string s;
	string inputStr;
		
	for(int i = 0 ; i < 9 ; i++) {
		cin >> inputStr;
		if(inputStr == "0")
			inputStr = "9";
		
		s += inputStr;
	}
	
	queue<int> q;
	map<int, int> m;
	
	int start = stoi(s);
	m[start] = 0;
	q.push(start);
	
	while(!q.empty()) {
		
		int front = q.front();
		q.pop();
		string current = to_string(front);
		int z = current.find('9');
		int x = z / 3;
		int y = z % 3;
		
		for(int i = 0 ; i < 4 ; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if(nx >= 0 && nx < 3 && ny >= 0 && ny < 3 ) {
				string next = current;
				swap(next[x*3 + y], next[nx * 3 + ny]);
				int num = stoi(next);
				if(m.count(num) == 0) {
					m[num] = m[stoi(current)] + 1;
					q.push(num);
				}
			}
		}
	}

	
	if(m.count(123456789))  {
		cout << m[123456789];
	} else {
		cout << -1;
	}
	
	
	

}