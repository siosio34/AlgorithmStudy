#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

vector<int> arr[100005];
int parent[100005];

void dfs(int num, int _parent) {
	
	parent[num] = _parent;
	int i;
	int vec_size = arr[num].size();
	for(i = 0 ;i < vec_size ; i++) {
		if(arr[num][i] != _parent)
			dfs(arr[num][i],num);
	}
}
	


int main() {
	int num;
	cin >> num;
	
	int i,j;
	int root = 1;
	for(int k = 0 ;k < num-1; k++) {
		scanf("%d %d",&i,&j);
		arr[i].push_back(j);
		arr[j].push_back(i);
	}
	
	dfs(root,0);
	
	for(int i = 2 ; i <= num ; i++) {
		printf("%d\n",parent[i]);
	}
}