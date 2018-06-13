#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	int t;
	cin >> t;
	getchar();
	string tmp;
	int i = 1;
	while(t--) {
		getline(cin,tmp);
		cout <<i++ << ". "<< tmp << endl;
	}
}