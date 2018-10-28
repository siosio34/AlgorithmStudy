#include <iostream>
#include <vector>
#include <map>
#include <cstring>
using namespace std;

int n,m;
int ans;
bool visited[10001];


vector<pair<int,int>> v[10001];
int weight;

bool checkWeight(int current, int end) {
	
	if(visited[current])
		return false;
	
	visited[current] = true;
	
	if(current == end) {
		return true;
	}
	
	for(auto &p : v[current]){
		if(p.second >= weight) {
			if(checkWeight(p.first, end)) {
				return true;
			}
		}
	}
	
	return false;
}
	 


int main() {

	cin >> n >> m;

	int a,b,c;
	int maxNum = 0;
	for(int i = 0 ; i < m ; i++) {
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b,c));
		v[b].push_back(make_pair(a,c));
	}
	
	int factoryX, factoryY;
	cin >> factoryX >> factoryY;
	
	int left = 1;
	int right = 1000000000;
	
	while(left <= right) {
		weight = (left + right) / 2;
		memset(visited,false,sizeof(visited));
		if(checkWeight(factoryX,factoryY)) {
			ans = weight;
			left = weight + 1;
		} else {
			right = weight -1;
		}
		
	}
	
	cout << ans;

	
	
}