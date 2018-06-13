#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	for(int i =1 ; i <= t ; i++) {
		int human;
		cin >> human;
		
		int a[51];
		memset(a,0,sizeof(a));
		int maxNum = 0; ;
		int tmp;
		int minNum = 101;
		int largestGap = 0;
		for(int j = 0 ; j < human ; j++) {
			cin >> a[j];
			maxNum = maxNum < a[j] ? a[j] : maxNum;
			minNum = minNum > a[j] ? a[j] : minNum;
		}
		
		sort(a, a + human);
		for(int j = human-1 ; j > 0 ; j--) {
			largestGap = largestGap > a[j]-a[j-1] ? largestGap : a[j]-a[j-1];
		}
		cout << "Class " << i << endl;
		printf("Max %d, Min %d, Largest gap %d\n",maxNum,minNum,largestGap);
	
		
	}
	
	
}