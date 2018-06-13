#include <iostream>
using namespace std;

int main() {
	int l,p;
	cin >> l >> p;
	
	int num = l * p;
	
	int tmp;
	for(int i = 0 ; i < 5 ; i++) {
		cin >> tmp;
		cout << tmp - num << " ";
	}
	
}