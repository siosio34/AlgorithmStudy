#include <iostream>
#include <cstdio>
using namespace std;

int arr[100001];
int sum[100001];

int main() {
	int n;
	int m;
	
	scanf("%d%d",&n,&m);

	
	for(int i = 1 ; i <= n ; i++) {
		scanf("%d", &arr[i]);
		sum[i] = sum[i-1] + arr[i];
	}
	
	int start, end;
	
	for(int i = 0 ; i < m ; i++) {
		scanf("%d%d",&start, &end);
		printf("%d\n",  sum[end] - sum[start-1]);
	}
}