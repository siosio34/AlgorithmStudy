#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		string s;
		cin >> s;
		transform(s.begin(), s.end(),s.begin(),[](unsigned char c){ return std::tolower(c); });
		cout << s << endl;
	}
}