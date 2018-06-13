#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int aArrayNum;
	int bArrayNum;

	cin >> aArrayNum >> bArrayNum;
	vector<int> aArray(aArrayNum);
	vector<int> bArray(bArrayNum);
	vector<int> resultArray(aArrayNum + bArrayNum);

	for (int i = 0; i < aArrayNum; i++) {
		cin >> aArray[i];
	}

	for (int i = 0; i < bArrayNum; i++) {
		cin >> bArray[i];
	}

	sort(aArray.begin(), aArray.end());
	sort(bArray.begin(), bArray.end());

	int k = 0;
	int j = 0;
	int resultStart = 0;
	while (k != aArrayNum && j != bArrayNum) {
		if (aArray[k] < bArray[j]) {
			resultArray[resultStart] = aArray[k];
			k++;
		}
		else {
			resultArray[resultStart] = bArray[j];
			j++;
		}
		resultStart++;
	}

	if (resultStart != (aArrayNum + bArrayNum)) {
		if (k != aArrayNum) {
			for (; resultStart < (aArrayNum + bArrayNum); resultStart++) {
				resultArray[resultStart] = aArray[k];
				k++;
			}
		}
		else {
			for (; resultStart < (aArrayNum + bArrayNum); resultStart++) {
				resultArray[resultStart] = bArray[j];
				j++;
			}
		}
	}

	for (int i = 0; i < aArrayNum + bArrayNum; i++) {
		cout << resultArray[i] << " ";
	}
	
	
}