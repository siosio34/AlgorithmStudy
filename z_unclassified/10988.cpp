#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int end = s.length() -1;
	int start = 0;
	while(start <= end) {
		if(s[start] != s[end])
			break;
		start += 1;
		end -=1;
	}
	if(start >= end)
		cout << 1;
	else
		cout << 0;
	
}