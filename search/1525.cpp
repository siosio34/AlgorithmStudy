#include <iostream>
#include <queue>
#include <string>
#include <map>
#include <cmath>
using namespace std;


int main() {

	string s;
	string inputStr;
		
	for(int i = 0 ; i < 9 ; i++) {
		cin >> inputStr;
		if(inputStr == "0")
			inputStr = "9";
		
		s += inputStr;
	}
	
	queue<int> q;
	map<int, int> m;

	int num = stoi(s);
	q.push(num);
	
	while(!q.empty()) {
		
		int 
		
	}
	

}