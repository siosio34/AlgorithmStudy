#include <iostream>
#include <stdio.h>
using namespace std;

int swapResult;
int a[500000];
int b[500000];

long long go(int start, int end) {
	if (start == end) {
		return 0;
	}
	int mid = (start + end) / 2;
	long long ans = go(start, mid) + go(mid + 1, end);
	int i = start;
	int j = mid + 1;
	int k = 0;
	while (i <= mid || j <= end) {
		if (i <= mid && (j > end || a[i] <= a[j])) {
			b[k++] = a[i++];
		}
		else {
			ans += (long long)(mid - i + 1);
			b[k++] = a[j++];
		}
	}
	for (int i = start; i <= end; i++) {
		a[i] = b[i - start];
	}
	return ans;
	
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	long long ans = go(0, n - 1);
	printf("%lld\n", ans);
	return 0;
}