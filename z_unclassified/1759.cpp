#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

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

void go(int n, vector<char> &alpha, string password, int i) {
	if (password.length() == n) {
		if (check(password)) {
			cout << password << endl;
		}
		return;
	}
	if (alpha.size() <= i) return;
	go(n, alpha, password + alpha[i], i + 1);
	go(n, alpha, password, i+1);
}


int main() {

	cin >> l >> c;
	vector<char> a(c);

	for (int i = 0; i < c; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	string pass = "";

	go(l, a, pass, 0);
}