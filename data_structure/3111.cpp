#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	stack<char> left;
	stack<char> right;
	
	string a;
	string t;
	
	cin >> a >> t;
	
	int l = 0;
	int r = t.size() - 1;
	
	int aLen = a.size();
	
	bool flag = true;
	
	stack<char> tmp;
	
	while(l <= r) {
		
		if(flag) { // left 스택일때
			
			left.push(t[l]);
			l++;
			
			int lSize = left.size();
			if(lSize >= aLen) {
				
				bool isTrue = true;
				
				for(int i = 0 ; i < aLen ; i++) {
					char top = left.top();
					left.pop();
					tmp.push(top);
					if(top != a[aLen - 1 - i]) {
						isTrue = false;
						break;
					}
					
				}
				
				if(isTrue) {
					flag = false;
					int tmpSize =  tmp.size();
					for(int i = 0 ; i < tmpSize ; i++ ) {
						tmp.pop();
					}
				} else {
					int tmpSize =  tmp.size();
					for(int i = 0 ; i < tmpSize ; i++ ) {
						char top = tmp.top();
						tmp.pop();
						left.push(top);	
					}
				}
	
			}
			

		}
		
		else { // right 스택일대
			
			right.push(t[r]);
			r--;
			
			int rSize = right.size();
			if(rSize >= aLen) {
				
				bool isTrue = true;
				
				for(int i = 0 ; i < aLen ; i++) {
					char top = right.top();
					right.pop();
					tmp.push(top);
					if(top != a[i]) {
						isTrue = false;
						break;
					}
					
				}
				
				if(isTrue) {
					flag = true;
					int tmpSize =  tmp.size();
					for(int i = 0 ; i < tmpSize ; i++ ) {
						tmp.pop();
					}
				} else {
					int tmpSize =  tmp.size();
					for(int i = 0 ; i < tmpSize  ; i++ ) {
						char top = tmp.top();
						tmp.pop();
						right.push(top);	
					}
				}
	
			}	
		}
	}
	
	int lSize = left.size();
	for(int i = 0 ; i < lSize ; i++) {
		char top = left.top();
		left.pop();
		right.push(top);
		
		int rSize = right.size();
		bool isTrue = true;
		if(rSize >= aLen) {
			for(int i = 0 ; i < aLen ; i++) {
				char top = right.top();
				right.pop();
				tmp.push(top);
				if(top != a[i]) {
					isTrue = false;
					break;
				}
				
			}
			
			if(isTrue) {
				int tmpSize =  tmp.size();
				for(int i = 0 ; i < tmpSize ; i++ ) {
					tmp.pop();
				}
			} else {
					int tmpSize =  tmp.size();
					for(int i = 0 ; i < tmpSize ; i++ ) {
						char top = tmp.top();
						tmp.pop();
						right.push(top);	
				}
			}
		}
	
	}
	

	
	int rSize = right.size();
	for(int i = 0 ; i < rSize ; i++) {
		char top = right.top();
		right.pop();
		cout << top;
	
	}
	
	return 0;
	
}