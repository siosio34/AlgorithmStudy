#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int poleNum = 0;
	stack<int> s;
	int answer = 0;

	string inputString;
	cin >> inputString;
	int size = inputString.size();

	for (int i = 0; i < size; i++) {
		if (inputString[i] == '(') {
			s.push(i);
		}
		else {
			if (s.top() + 1 == i) {
				s.pop();
				answer += s.size();
			}
			else {
				s.pop();
				answer += 1;
			}
		}
	}
	cout << answer << endl;

	return 0;
	
}