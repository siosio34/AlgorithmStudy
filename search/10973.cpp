#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int permutation[10001];

int main() {
	int n;
	cin >> n;
	
	int tmp;
	for(int i = 0 ; i < n ; i++) {
		cin >> tmp;
		permutation[i] = tmp;
	}
	
	bool isFirstPermution = true;
	
	do {
		if(isFirstPermution) {
			isFirstPermution = false;
			continue;
		} else {
			for(int i = 0 ; i < n ; i++) {
				cout << permutation[i] << " ";
			}
			return 0;
		}
	} while (prev_permutation(permutation, permutation+n));
	
	cout << -1 << endl;
	
}

