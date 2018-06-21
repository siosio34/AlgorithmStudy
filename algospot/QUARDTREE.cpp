#include <iostream>
#include <string>
using namespace std;

string reverse(string::iterator& it) {
	char head = *it;
	++it;
	if(head == 'b' || head == 'w')
		return string(1,head); // head란 문자를 한개만큼 복사함.
	
	string upperLeft = reverse(it);
	string upperRight = reverse(it);
	string lowerLeft = reverse(it);
	string lowerRight = reverse(it);
	return string("x") + lowerLeft + lowerRight + upperLeft + upperRight;
	
}

int main() {
	int t;
	cin >> t;
	
	string tmp;
	
	while(t--) {
		cin >> tmp;
		string::iterator strPtr = tmp.begin();
		cout << reverse(strPtr) << endl;
	}
}