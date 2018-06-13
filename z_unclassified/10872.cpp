#include <iostream>
using namespace std;

int main() {
	long long int num;
	cin >> num;
	
	int sum = 1;
	for(int i = num ; i >=1 ; i--) {
		sum *= i;
	}
	cout << sum << endl;
}