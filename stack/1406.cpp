#include <iostream>
#include <stack>
#include <cstring>
#include <cstdio>
using namespace std;

char a[600001];
// 커서를 기준으로 왼쪽 스택과 오른쪽 스택으로 구분
int main() {
	
	scanf("%s",a);
	int n = strlen(a);
	stack<char> left;
	stack<char> right;
	for(int i = 0 ; i < n ; i++) {
		left.push(a[i]);
	}

	int m;
	scanf("%d", &m);
	char tmp;
	while(m--) {
		scanf(" %c", &tmp);
		if(tmp == 'L') {
			if(!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		} else if(tmp == 'D') {
			if(!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		} else if(tmp == 'B') {
			if(!left.empty()) {
				left.pop();
			}
		} else if(tmp == 'P'){
			scanf(" %c", &tmp);
			left.push(tmp);
		}
	}
	while(!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while(!right.empty()) {
		printf("%c", right.top());
		right.pop();
	}
	return 0;

	
}