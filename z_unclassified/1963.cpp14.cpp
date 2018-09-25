#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
#include <cstring>
using namespace std;

int change(int num,int index, int digit) {
	if(index == 0 && digit == 0) {
		return -1;
	}
	string s = to_string(num);
	s[index] = digit + '0';
	return stoi(s);
}

bool prime[10001];
bool check[10001];
int d[10001];

int main() {
	for(int i =2 ; i <= 10000 ; i++) {
		if(prime[i] == false) {
			for(int j = i*i ; j <= 10000 ; j+= i) {
				prime[j] = true;
			}
		}
	}
	for(int i = 0 ; i <= 10000 ; i++) {
		prime[i] = !prime[i];
	}
	
	int t;
	cin >>t;
	
	while(t--) {
		int a,b;
		cin >> a >> b;
		memset(check,false,sizeof(check));
		memset(d,0,sizeof(d));
		d[a] = 0;
		check[a] = true;
		queue<int> q;
		q.push(a);
		
		while(!q.empty()) {
			int now = q.front();
			
			q.pop();
			for(int i = 0 ; i < 4 ; i ++) {
				for(int j =0 ; j<=9 ; j++) {
					int next = change(now,i,j);
					if(next != -1) {
						if(prime[next] && check[next] == false) {							q.push(next);
							d[next] = d[now] + 1;
							check[next]= true;
						}
					}
				}
			}

		}
		cout << d[b] << endl;
		
	}
}