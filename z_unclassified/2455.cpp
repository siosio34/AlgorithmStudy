#include <iostream>
using namespace std;

int main() {
	int a,b;
	int max_num = -1;
	int currentNum = 0;
	for(int i =0 ; i <4 ; i++) {
		cin >> a >> b;
		
		currentNum = currentNum + b - a;

		if(currentNum > max_num) {
			max_num = currentNum;
		}
	}
	cout << max_num << endl;
}