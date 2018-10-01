#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s[16];
int l, c;

bool check(string word) {

	int moumNum = 0;
	int zaumNum = 0;

	for (int i = 0; i < word.length(); i++) {
		if (word[i] == 'a' || word[i] == 'i' || word[i] == 'o' || word[i] == 'e' || word[i] == 'u')
			moumNum++;
		else
			zaumNum++;

		if (moumNum >= 1 && zaumNum >= 2)
			return true;
	}
	return false;
}

void makePassword(int index, string str) {
	
	if(index == c)
		return ;

	if(str.size() == l) {
		if(check(str))
			cout << str << endl;
		return ;
	}
	
	makePassword(index + 1, str + s[index + 1]);
	makePassword(index + 1, str);
}

int main() {

	
	cin >> l >> c;
	
	for(int i = 0 ; i < c ; i++) {
		cin >> s[i];
	}
	
	sort(s, s + c);
	
	for(int i = 0 ; i <= c - l; i++) {
		makePassword(i, s[i]);
	}
	
}