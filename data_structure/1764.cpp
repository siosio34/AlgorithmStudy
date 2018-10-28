#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	
	vector<string> noListen;
	vector<string> noSee;
	
	string tmp;
	for(int i = 0 ; i < a ; i++) {
		cin >> tmp;
		noListen.push_back(tmp);
	}
	
	
	for(int i = 0 ; i < b ; i++) {
		cin >> tmp;
		noSee.push_back(tmp);
	}
	
	vector<string> v(a+b);
	sort(noListen.begin(), noListen.end());
	sort(noSee.begin(), noSee.end());
	
	std::vector<string>::iterator it;
	it =set_intersection(noListen.begin(), noListen.end(), noSee.begin(), noSee.end(), v.begin());
	v.resize(it-v.begin());
	
	cout << v.size() << "\n";
	
	for (it=v.begin(); it!=v.end(); ++it)
    	cout << *it << "\n";

	
}