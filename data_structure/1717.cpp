#include <iostream>
#include <cstdio>
using namespace std;

int parent[1000001];

int findParent(int x) {
	if(x == parent[x])
		return x;
	else {
		return parent[x] = findParent(parent[x]);
	}
}

int unionTwoNode(int x, int y) {
	x = findParent(x);
	y = findParent(y);
	parent[y] = x;
}

int main() {

	int n, m;
	cin >> n >> m;
	
	int select;
	
	for(int i = 0 ; i <= n ; i++) {
		parent[i] = i;
	}
	
	int a,b;
	while(m--) {
		scanf("%d", &select);
		scanf("%d %d",&a,&b);
		if(select == 0) {
			unionTwoNode(a,b);
		} else if(select == 1) {
			printf("%s\n", (findParent(a) == findParent(b) ? "YES" : "NO"));
		}
	}
}