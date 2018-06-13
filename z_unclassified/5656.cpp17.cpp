#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a;
	string oper;
	int b;
	
	int i = 0;
	
	while(1) {
		cin >> a >> oper >> b;
		if(oper == "E")
			return 0;
		
		string tmp = "";
		if(oper == ">") {
			tmp = a > b ? "true" : "false";
		} else if(oper == ">=") {
			tmp = a >= b ? "true" : "false";
		} else if(oper == "<") {
			tmp = a < b ? "true" : "false";
		}else if(oper == "<=") {
			tmp = a <= b ? "true" : "false";
		}else if(oper == "==") {
			tmp = a == b ? "true" : "false";
		}else if(oper == "!=") {
			tmp = a != b ? "true" : "false";
		}
		cout << "Case " << ++i << ": " << tmp << endl;
	}
	
	
	
}