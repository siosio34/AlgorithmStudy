#include <iostream>
using namespace std;

int parent[101];

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
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		parent[i] = i;
	}
	
	int pairNum;
	cin >> pairNum;
	
	int a,b;
	
	for(int i = 0 ; i < pairNum ; i++) {
		cin >> a >> b;
		unionTwoNode(a,b);
	}
	
	int ans = 0;
	for(int i = 2 ; i <=n ; i++) {
		if (findParent(1) == findParent(i)) {
            ans += 1;
        }
	}
	
	cout << ans;
	
}