#include <iostream>
#include <cstring>
using namespace std;

bool checked[1001];
int a[1001];

void dfs(int x) {
	if(checked[x]) return ;
	checked[x] = true;
	dfs(a[x]);
}

int main() {
	
	int t;
	cin >> t;
	
	while(t--) {
		memset(checked,false,sizeof(checked));
		memset(a,0,sizeof(a));
		int n;
		cin >> n;
		
		for(int  i = 1 ; i <= n ; i++) {
			cin >> a[i];
		}
		
		int cnt = 0;
		for(int i = 1 ; i <= n ; i++) {
			if(checked[i] == false) {
				dfs(i);
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}