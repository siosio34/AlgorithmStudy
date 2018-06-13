#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

int main() {

	string input;
	vector<string> vectorTemp;

	int caseNum;
	cin >> caseNum;

	for (int i = 0; i < caseNum; i++) {
		cin >> input;
		int checkLength = 0;
		stack<string> stackString;

		for (int i = 0; i < input.length(); i++) {
			if (input[i] == ')') {
				if (stackString.size() != 0) {
					stackString.pop();
					checkLength++;
				}
				else {
					break;
				}
			}
			else {
				stackString.push("(");
				checkLength++;
			}
		}

		if (checkLength == input.length() && stackString.size() == 0)
			vectorTemp.push_back("YES");
		else
			vectorTemp.push_back("NO");
	}

	for (int i = 0; i < caseNum; i++) {
		cout << vectorTemp[i] << endl;
	}

	return 0;

}