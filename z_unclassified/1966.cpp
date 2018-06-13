#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a>b;
}
int main() {
	
	int t;
	cin >> t;
	int n,m;
	
	queue<int> que;
	
	while(t--) {
		cin >> n >> m;
		que = queue<int>();
		
		int a[101];
		int b[101];
		for(int i = 0 ; i <= 100 ; i++) {
			a[i] = 0;
			b[i] = 0;
		}
		
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
			b[i] = a[i];
			que.push(i);
		}
		
		sort(a,a+n,cmp);
		
		int cnt = 0;
		int popContent = -1;
		
		while(!que.empty()) {
			int tmp = que.front();

			if(b[tmp] != a[cnt]) {
				que.push(tmp);
			} else {
				cnt++;
				if(tmp == m) {
					break;
				}
			}
			que.pop();
		}
		
		cout << cnt << endl;

		
	}
}