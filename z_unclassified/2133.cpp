#include <iostream>
using namespace std;

int D[31];


int main() {

	int num;
	cin >> num;

	D[0] = 1;
	
	for (int i = 2; i <= num; i = i + 2) {
		D[i] = 3 * D[i - 2];
		for (int k = i - 4; k >= 0; k = k - 2)
			D[i] += 2 * D[k];
	}

	cout << D[num];

}