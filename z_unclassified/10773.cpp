#include <iostream>
#include <stack>
using namespace std;

int main() {
	int k;
	cin >> k;
	
	stack<int> a;
	int tmp;
	for(int i = 0 ; i < k ; i++) {
		cin >> tmp;
		if(tmp == 0) {
			a.pop();
		}
		else {
			a.push(tmp);
		}
	}
	
	int sum = 0 ;
	while(!a.empty()) {
		int now = a.top();
		sum += now;
		a.pop();
	}
	cout << sum ;
	
	
}