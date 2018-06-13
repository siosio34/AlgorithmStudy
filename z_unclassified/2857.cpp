#include <iostream>
#include <string>
using namespace std;

int main() {
	string tmp;
	int cnt = 0;
	for(int i = 0 ; i < 5 ; i++) {
		cin >> tmp;
		
		if(tmp.find("FBI") != string::npos) {
			cout << i+1 << " ";
			cnt++;
		}
	}
	if(cnt == 0) {
		cout << "HE GOT AWAY!";
	}
	
}