#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--) {
		string temp;
		cin >> temp;
		cout << (int)temp[0] - 48 + (int)temp[2] - 48 << endl;
	}
}