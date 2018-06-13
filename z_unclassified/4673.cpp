#include <iostream>
using namespace std;

bool check[10001];

int main() {

	int checkNum = 1;
	int inputNum = 10000;
	
	while (checkNum <= inputNum) {
	
		int num = 1;
		 
		int lastNum = checkNum;
		int temp = lastNum;

		while (temp > 0) {
			int tempNum = temp % 10;
			temp /= 10;
			lastNum += tempNum;
		}

		if (lastNum <= inputNum)
			check[lastNum] = true;		
		
		checkNum++;
	}
	
	for (int i = 1; i <= inputNum; i++) {
		if (!check[i]) {
			cout << i << endl;
		}
	}

	// Ãâ·Â
	
}