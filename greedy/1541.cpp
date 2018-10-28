#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string s;
	cin >> s;
	
	
	bool minus = false;
	
	int sum = 0;
	int first = 0 ;
	
	for(int i = 0 ; i < s.size() ; i++) {
		if(minus) { 
			if(s[i] == '+' || s[i] == '-') {
				sum -= stoi(s.substr(first,i-first));
				first = i + 1;
			}
			else 
				continue;
			
		} else {
			if(s[i] == '+') {
				sum += stoi(s.substr(first,i-first));
				first = i + 1;
			} else if(s[i] == '-') {
				sum += stoi(s.substr(first,i-first));
				minus = true;
				first = i + 1;
			} else 
				continue;
		}
	}
	
	if(minus)
		sum -= stoi(s.substr(first,s.size() -first));
	else
		sum += stoi(s.substr(first,s.size() - first));
	
	cout << sum;
	
	
}