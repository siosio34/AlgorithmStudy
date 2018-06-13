#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	
	int sum = a * 60 + b - 45;
	if(sum < 45) {
		cout << 23 << " " << 60 + sum ; 
	} else {
		cout << sum / 60 % 24 << " " << sum % 60 << endl;
	}
	
}