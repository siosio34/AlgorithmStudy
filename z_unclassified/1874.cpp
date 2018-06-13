#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int a[100001];
int d[100001];
stack<int> st;
vector<string> s;
int main() {
	
	
	int n;
	cin >> n;
	for(int  i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	int i = 1;
	int cnt;
	for( cnt = 0 ; cnt < n ; cnt++) {
		while(i <= a[cnt]) {
			st.push(i);
			i++;
			s.push_back("+");
		}
		if(st.top() == a[cnt]) {
			st.pop();
			s.push_back("-");
		} else {
			break;
		}
	}
	if(cnt != n) {
		cout << "NO";
	} else {
		for(int i = 0 ; i < s.size() ; i++) {
			cout << s[i] << "\n";
		}
	}
	
}