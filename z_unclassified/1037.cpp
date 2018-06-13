#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int tmp;
	int max_num = 0 ;
	int min_num = 1000001;
	for(int i = 0 ; i < n ; i++) {
		cin >> tmp;
		max_num = max_num < tmp ? tmp : max_num;
		min_num = min_num > tmp ? tmp : min_num;
	}
	
	cout << max_num * min_num;
	
	
}