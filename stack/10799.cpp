#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	
	stack<int> a;
	string tmp;
	cin >> tmp;
	
	int cnt = 0;
	
	for(int i = 0 ; i < tmp.size() ; i++) {
		if(tmp[i] == '(') {
			a.push(i);
		} else {
			if(i - a.top() == 1) {
				a.pop();
				cnt += a.size();
			} else {
				a.pop();
				cnt += 1;
			}
		}
	}
	cout << cnt;
	return 0;
}