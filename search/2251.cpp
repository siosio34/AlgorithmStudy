#include <iostream>
#include <queue>
#include <utility>
using namespace std;

bool check[201][201];
bool ans[201];

int main() {
	int first, second, third;
	cin >> first >> second >> third;
	
	int sum = third;
	queue<pair<int,int> > q;
	q.push(make_pair(0,0));
	check[0][0] = true;
	
	ans[third] = true;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		int z = sum - x - y;

		q.pop();
		
		// x -> y
		int nx = 0;
		int ny = x + y;
		int nz = z;
		if (ny >= second) {
			nx = ny - second;
			ny = second;
		}
		
		if(!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(make_pair(nx,ny));
			if(nx == 0) {
				ans[nz] = true;
			}
		}
		
		// x -> z
		nx = 0;
		ny = y;
		nz = x + z;
		if(nz >= third) {
			nx = nz-third;
			nz = third;

		}
		
		if(!check[nx][y]) {
			check[nx][ny] = true;
			q.push(make_pair(nx,ny));
			if(nx == 0) {
				ans[nz] = true;
			}
		}
		
		// y -> x
		nx = x + y;
		ny = 0;
		nz = z;
		if(nx >= first) {
			ny = nx-first;
			nx = first;

		}
		
		if(!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(make_pair(nx,ny));
			if(nx == 0) {
				ans[nz] = true;
			}
		}
		
		// y -> z
		nx = x;
		ny = 0;
		nz = y + z;
		if(nz >= third) {
			ny = nz-third;
			nz = third;
		}
		
		if(!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(make_pair(nx,ny));
			if(nx == 0) {
				ans[nz] = true;
			}
		}
		
		// z -> x
		
		nx = x + z;
		ny = y;
		nz = 0;
		if(nx >= first) {
			nz = nx-first;
			nx = first;

		}
		
		if(!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(make_pair(nx,ny));
			if(nx == 0) {
				ans[nz] = true;
			}
		}
		
		// z -> y
		nx = x;
		ny = y + z;
		nz = 0;
		if(ny >= second) {
			nz = ny-second;
			ny = second;
		}
		
		if(!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(make_pair(nx,ny));
			if(nx == 0) {
				ans[nz] = true;
			}
		}
		

	}
	
	for(int i = 0 ; i <= 200 ; i++) {
			if(ans[i] == true) {
				cout << i << " ";
			}
	}	
	
	
	
}