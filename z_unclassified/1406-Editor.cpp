#include <iostream>
#include <string>
#include <string.h>
#include <stack>
using namespace std;

int main() {

	char initString[600000];
	stack<char> left, right;
	cin >> initString;

	for (int i = 0; i <strlen(initString); i++) {
		left.push(initString[i]);
	}

	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		char a;
		cin >> a;

		switch (a)
		{
		case 'L':
			if (left.size() != 0) {
				right.push(left.top());
				left.pop();
			}
			break;
		case 'D':
			if (right.size() != 0) {
				left.push(right.top());
				right.pop();
			}
			break;
		case 'B':
			if (left.size() != 0) {
				left.pop();
			}
			break;
		case 'P':
			char inputChar;
			cin >> inputChar;
			left.push(inputChar);
			break;
		}
	}

	while (left.size() != 0) {
		right.push(left.top());
		left.pop();
	}

	while (right.size() != 0) {
		cout << right.top();
		right.pop();
	}

	return 0;

}