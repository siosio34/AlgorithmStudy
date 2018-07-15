#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> a;
	int n, m;
	cin >> n >> m;
	
	for(int i = 1 ; i <= n ; i++) {
		a.push(i);
	}
	cout << "<";
	
	for(int i = 0 ; i < n-1; i++) {
		for(int j = 0 ; j < m -1 ; j++) {
			a.push(a.front());
			a.pop();
		}
		cout << a.front() << ", ";
		a.pop();
	}
	
	cout << a.front() << ">";
	return 0;
}