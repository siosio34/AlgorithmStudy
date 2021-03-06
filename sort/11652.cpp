#include <iostream>
#include <algorithm>
using namespace std;

long long a[1000001];

int main() {
	int n;
	cin >> n;
	
	for(int i = 0; i < n ; i++) {
		long long  tmp;
		cin >> tmp;
		a[i] = tmp;
	}
	
	sort(a,a+n);
	long long ans = a[0];
	int ans_cnt = 1;
	int cnt = 1;
	
	for(int i = 1; i < n ; i++) {
		if(a[i] != a[i-1]) {
			cnt = 1;
		} else {
			cnt += 1;
		}
		if(ans_cnt < cnt) {
			ans = a[i];
			ans_cnt = cnt;
		}
	}
	//map 을 사용해서도 풀수가 있다.
	cout << ans;
}
 