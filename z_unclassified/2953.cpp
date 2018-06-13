#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int maxPoint = 0;
	int winIndex = 0;
	int tmp;
	for(int i = 0 ; i <5 ; i++) {
		int sum = 0;
		for(int j = 0 ; j < 4 ; j++) {
			cin >> tmp;
			sum += tmp;
			if(maxPoint < sum ) {
				maxPoint = sum;
				winIndex = i;
			}
		}
	}
	cout << winIndex + 1 << " " << maxPoint;
}