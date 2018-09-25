#include <iostream>
#include <queue>
using namespace std;

bool isPrime[10001];
bool check[10001];
int dist[10001];


void makePrimeArray() {
	for(int i =2 ; i <= 10000 ; i++) {
		if(isPrime[i] == false) {
			for(int j = i*i ; j <= 10000 ; j+= i) {
				isPrime[j] = true;
			}
		}
	}
	for(int i = 0 ; i <= 10000 ; i++) {
		isPrime[i] = !isPrime[i];
	}
}

int change(int num,int index, int digit) {
	if(index == 0 && digit == 0) {
		return -1;
	}
	string s = to_string(num);
	s[index] = digit + '0';
	return stoi(s);
}

int main() {
	makePrimeArray();
	
	int t;
	cin >> t;
	
	
	
	while(t--) {
		
		int before, after;
		cin >> before >> after;
		
		for(int i = 0 ; i<= 10001 ; i++) {
			dist[i] = -1;
			check[i] = false;
		}
		
		queue<int> q;
		q.push(before);
		check[before] = true;
		dist[before] = 0;
		
		while(!q.empty()) {
			int front = q.front();
			q.pop();
			
			for(int i = 0 ; i < 4 ; i++) {
				for(int j = 0 ; j < 10 ; j++) {
					int next = change(front, i, j);
					if(next != -1) {
						
						if(isPrime[next] && check[next] == false) {
							dist[next] = dist[front] + 1;
							check[next] = true;
							q.push(next);
						}

					}
				}
			}
			
		}
		
		if(dist[after] >= 0) {
			cout << dist[after] << endl;
		} else {
			cout << "Impossible" << endl;
		}
	
	}
	
	
}