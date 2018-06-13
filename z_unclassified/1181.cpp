#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string a[20001];

bool sortedString(string a, string b) {
	if(a.length() < b.length())
		return true;
	
	else if(a.length() == b.length()) {
		return a < b;
	}
	
	return false;
	
}

int main() {
	
	int t;
	cin >> t;
	

	
	string tmp;
	for(int i = 0 ; i<t ; i++) {
		cin >> tmp;
		a[i] = tmp;
	}
	
	sort(a, a + t ,sortedString);
	
	cout << a[0] << "\n";
	for(int i = 1 ; i < t ; i++) {
		if(a[i] != a[i-1])
			cout << a[i] << "\n";
		
	}
	
	
}