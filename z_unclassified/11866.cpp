#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	
	queue<int> a;
	for(int i = 1 ; i <= n ; i++) {
		a.push(i);
	}
	
	cout << "<";
	
	int tmp;
	while(a.front() != a.back()) {
		for(int i = 0 ; i  <m -1 ; i++) {
			tmp = a.front();
			a.pop(); a.push(tmp);
		}
		
		cout << a.front() <<", ";
		a.pop();
	}
	cout << a.front();
	cout <<">";
}