#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> tmp;
int main() {
	string s;
	cin >> s;
	
	for(int i = 0 ; i < s.size() ; i++) {
		tmp.push_back(s.substr(i));
	}
	
	sort(tmp.begin(),tmp.end());
	
	for(int i = 0 ; i < tmp.size() ; i++) {
		cout << tmp[i] << endl;
	}
}