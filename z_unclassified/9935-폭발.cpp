#include <iostream>
#include <stack>
#include <string>
using namespace std;

char a[1000001];
bool erased[1000001];
char b[100];

int main() {

	string a, boom;
	cin >> a >> boom;

	int aLen = a.length();
	int boomLen = boom.length();

	if (boomLen == 1) {
		for (int i = 0; i < aLen; i++) {
			if (a[i] == boom[0]) {
				erased[i] = true;
			}
		}
	}
	else {
		stack<pair<int, int> > s;
		for (int i = 0; i < aLen; i++) {
			if (a[i] == boom[0]) 
				s.push(make_pair(i, 0));
			else {
				if (!s.empty()) {
					auto p = s.top();
					if (a[i] == boom[p.second + 1]) {
						s.push(make_pair(i, p.second + 1));
						if (p.second + 1 == boomLen - 1) {
							for (int k = 0; k < boomLen; k++) {
								auto p = s.top();
								erased[p.first] = true;
								s.pop();
							}
						}
					}
					else {
						while (!s.empty()) {
							s.pop();
						}
					}
				}
				
			}
		}

	}
	bool printed = false;
	for (int i = 0; i < aLen; i++) {
		if (!erased[i]) {
			cout << a[i];
			printed = true;
		}
	}
	if (!printed)
		cout << "FRULA\n";

	return 0;

}