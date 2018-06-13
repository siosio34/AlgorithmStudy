#include <stdio.h>
using namespace std;
int max_num;

int solve(int temp) {
	
	if(temp == 1)
		return temp;
	
	do {
		if(max_num < temp)
			max_num = temp;
		
		if(temp % 2 == 0) {
			temp = temp/2;
		}
		
		else {
			temp = temp * 3 + 1;
		}
		
	} while(temp != 1);
	
	return max_num;
}

int main() {
	int n;
	scanf("%d",&n);
	
	int temp;
	while(n--) {

		scanf("%d",&temp);
		max_num = temp;
		printf("%d\n",solve(max_num));
	}
}