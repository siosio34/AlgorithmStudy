#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> a;

int main() {
	
	string tmp;
	while(getline(cin,tmp)) {
		if(tmp != "") {
			a.push_back(tmp);
		}
		
		if(tmp == "EOI") {
			break;
		}
	}
	
	for(int i = 0 ; i < a.size() -1 ; i++) {
		string tmp = a[i];
		transform(tmp.begin(),tmp.end(),tmp.begin(), ::toupper);
	

			if(tmp.find("NEMO") != string::npos) {
				cout << "Found" << endl;
			} else {
				cout << "Missing" << endl;
			}
		
	}
	
	
}