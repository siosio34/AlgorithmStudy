#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	
	string minA = to_string(a);
	string maxA = to_string(a);
	string minB = to_string(b);
	string maxB = to_string(b);
	
	string strA = to_string(a);
	string strB = to_string(b);
	
	for(int i = 0 ; i <strA.size() ; i++) {
		if(strA[i] == '5') {
			maxA[i] ='6';
		} else if(strA[i] =='6') {
			minA[i] ='5';
		}
	}

	for(int i = 0 ; i < strB.size() ; i++) {
		if(strB[i] == '5') {
			maxB[i] ='6';
		} else if(strB[i] =='6') {
			minB[i] ='5';
		}
	}
	
	cout << stoi(minA) + stoi(minB) << " "<< stoi(maxA) + stoi(maxB);
	
	
}