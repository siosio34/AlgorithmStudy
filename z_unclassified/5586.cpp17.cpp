#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string s;
	cin >> s;
	
	int a = 0;
	int b = 0;
	int wordCount = 0;
	
	while(s.find("JOI",wordCount) != string::npos) {
		a++;
		wordCount = s.find("JOI",wordCount) + 3;
	} 
	wordCount = 0;
	while(s.find("IOI", wordCount) != string::npos) {
		b++;
		wordCount = s.find("IOI", wordCount) + 2;
	}
	cout << a <<endl;
	cout << b;
}