#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		int k;
		string s;
		cin >> k;
		cin >> s;
		s.erase(k-1,1);
		cout << s << endl;
	}
}